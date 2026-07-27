extends Node3D

@export var grid_size: int = 8
@export var spacing: float = 4.0
@export var seed_value: int = 42

var building_colors: Array[Color] = [
    Color(0.40, 0.35, 0.96),
    Color(0.20, 0.70, 0.88),
    Color(0.15, 0.82, 0.67),
    Color(0.95, 0.55, 0.25)
]


func _ready() -> void:
    seed(seed_value)
    _create_environment()
    _create_ground()
    _create_roads()
    _create_buildings()


func _create_environment() -> void:
    var light := DirectionalLight3D.new()
    light.rotation_degrees = Vector3(-55.0, -30.0, 0.0)
    light.light_energy = 1.4
    light.shadow_enabled = true
    add_child(light)

    var camera := Camera3D.new()
    add_child(camera)
    camera.position = Vector3(25.0, 27.0, 25.0)
    camera.look_at(Vector3.ZERO, Vector3.UP)
    camera.current = true


func _create_ground() -> void:
    var ground := MeshInstance3D.new()
    var mesh := BoxMesh.new()
    var city_width := float(grid_size) * spacing + 10.0
    mesh.size = Vector3(city_width, 0.5, city_width)
    ground.mesh = mesh
    ground.position.y = -0.25
    ground.material_override = _make_material(Color(0.05, 0.10, 0.16))
    add_child(ground)


func _create_roads() -> void:
    var city_width := float(grid_size) * spacing + 4.0

    for index in range(grid_size + 1):
        if index % 3 != 0:
            continue

        var offset := (float(index) - float(grid_size) / 2.0) * spacing

        _create_box(
            Vector3(city_width, 0.08, 1.1),
            Vector3(0.0, 0.04, offset),
            Color(0.12, 0.16, 0.22)
        )

        _create_box(
            Vector3(1.1, 0.08, city_width),
            Vector3(offset, 0.04, 0.0),
            Color(0.12, 0.16, 0.22)
        )


func _create_buildings() -> void:
    for x in range(grid_size):
        for z in range(grid_size):
            if x % 3 == 0 or z % 3 == 0:
                continue

            var height := randf_range(1.8, 8.5)
            var width := randf_range(1.7, 2.8)
            var depth := randf_range(1.7, 2.8)

            var x_position := (float(x) - float(grid_size - 1) / 2.0) * spacing
            var z_position := (float(z) - float(grid_size - 1) / 2.0) * spacing

            _create_box(
                Vector3(width, height, depth),
                Vector3(x_position, height / 2.0, z_position),
                building_colors[randi() % building_colors.size()]
            )


func _create_box(size: Vector3, position_value: Vector3, color: Color) -> void:
    var instance := MeshInstance3D.new()
    var mesh := BoxMesh.new()
    mesh.size = size
    instance.mesh = mesh
    instance.position = position_value
    instance.material_override = _make_material(color)
    add_child(instance)


func _make_material(color: Color) -> StandardMaterial3D:
    var material := StandardMaterial3D.new()
    material.albedo_color = color
    material.metallic = 0.08
    material.roughness = 0.72
    return material
