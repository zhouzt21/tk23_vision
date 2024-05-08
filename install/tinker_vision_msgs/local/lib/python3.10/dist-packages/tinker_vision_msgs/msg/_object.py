# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tinker_vision_msgs:msg/Object.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Object(type):
    """Metaclass of message 'Object'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tinker_vision_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tinker_vision_msgs.msg.Object')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Object(metaclass=Metaclass_Object):
    """Message class 'Object'."""

    __slots__ = [
        '_conf',
        '_id',
        '_cls',
        '_centroid',
        '_intersect',
        '_left_up',
        '_right_down',
    ]

    _fields_and_field_types = {
        'conf': 'float',
        'id': 'int16',
        'cls': 'string',
        'centroid': 'geometry_msgs/Point',
        'intersect': 'boolean',
        'left_up': 'geometry_msgs/Point',
        'right_down': 'geometry_msgs/Point',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.conf = kwargs.get('conf', float())
        self.id = kwargs.get('id', int())
        self.cls = kwargs.get('cls', str())
        from geometry_msgs.msg import Point
        self.centroid = kwargs.get('centroid', Point())
        self.intersect = kwargs.get('intersect', bool())
        from geometry_msgs.msg import Point
        self.left_up = kwargs.get('left_up', Point())
        from geometry_msgs.msg import Point
        self.right_down = kwargs.get('right_down', Point())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.conf != other.conf:
            return False
        if self.id != other.id:
            return False
        if self.cls != other.cls:
            return False
        if self.centroid != other.centroid:
            return False
        if self.intersect != other.intersect:
            return False
        if self.left_up != other.left_up:
            return False
        if self.right_down != other.right_down:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def conf(self):
        """Message field 'conf'."""
        return self._conf

    @conf.setter
    def conf(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'conf' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'conf' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._conf = value

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'id' field must be an integer in [-32768, 32767]"
        self._id = value

    @builtins.property
    def cls(self):
        """Message field 'cls'."""
        return self._cls

    @cls.setter
    def cls(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'cls' field must be of type 'str'"
        self._cls = value

    @builtins.property
    def centroid(self):
        """Message field 'centroid'."""
        return self._centroid

    @centroid.setter
    def centroid(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'centroid' field must be a sub message of type 'Point'"
        self._centroid = value

    @builtins.property
    def intersect(self):
        """Message field 'intersect'."""
        return self._intersect

    @intersect.setter
    def intersect(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'intersect' field must be of type 'bool'"
        self._intersect = value

    @builtins.property
    def left_up(self):
        """Message field 'left_up'."""
        return self._left_up

    @left_up.setter
    def left_up(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'left_up' field must be a sub message of type 'Point'"
        self._left_up = value

    @builtins.property
    def right_down(self):
        """Message field 'right_down'."""
        return self._right_down

    @right_down.setter
    def right_down(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'right_down' field must be a sub message of type 'Point'"
        self._right_down = value
