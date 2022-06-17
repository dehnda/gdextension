#pragma once

#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/viewport.hpp>

#include <godot_cpp/core/binder_common.hpp>

using namespace godot;

class MySingleton : public Object
{
	GDCLASS(MySingleton, Object);

	static MySingleton *singleton;

protected:
	static void _bind_methods();

public:
	static MySingleton *get_singleton();

	MySingleton();
	~MySingleton();

	void hello_singleton();
};
