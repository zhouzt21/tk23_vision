# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tinker_vision_msgs:msg/Face.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Face(type):
    """Metaclass of message 'Face'."""

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
                'tinker_vision_msgs.msg.Face')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__face
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__face
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__face
            cls._TYPE_SUPPORT = module.type_support_msg__msg__face
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__face

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from tinker_vision_msgs.msg import BoundingBox
            if BoundingBox.__class__._TYPE_SUPPORT is None:
                BoundingBox.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Face(metaclass=Metaclass_Face):
    """Message class 'Face'."""

    __slots__ = [
        '_id',
        '_box',
        '_centroid',
        '_age',
        '_gender',
        '_clothes',
        '_hair',
        '_info',
    ]

    _fields_and_field_types = {
        'id': 'int32',
        'box': 'tinker_vision_msgs/BoundingBox',
        'centroid': 'geometry_msgs/Point',
        'age': 'int32',
        'gender': 'int32',
        'clothes': 'string',
        'hair': 'string',
        'info': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tinker_vision_msgs', 'msg'], 'BoundingBox'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        from tinker_vision_msgs.msg import BoundingBox
        self.box = kwargs.get('box', BoundingBox())
        from geometry_msgs.msg import Point
        self.centroid = kwargs.get('centroid', Point())
        self.age = kwargs.get('age', int())
        self.gender = kwargs.get('gender', int())
        self.clothes = kwargs.get('clothes', str())
        self.hair = kwargs.get('hair', str())
        self.info = kwargs.get('info', [])

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
        if self.id != other.id:
            return False
        if self.box != other.box:
            return False
        if self.centroid != other.centroid:
            return False
        if self.age != other.age:
            return False
        if self.gender != other.gender:
            return False
        if self.clothes != other.clothes:
            return False
        if self.hair != other.hair:
            return False
        if self.info != other.info:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

    @builtins.property
    def box(self):
        """Message field 'box'."""
        return self._box

    @box.setter
    def box(self, value):
        if __debug__:
            from tinker_vision_msgs.msg import BoundingBox
            assert \
                isinstance(value, BoundingBox), \
                "The 'box' field must be a sub message of type 'BoundingBox'"
        self._box = value

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
    def age(self):
        """Message field 'age'."""
        return self._age

    @age.setter
    def age(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'age' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'age' field must be an integer in [-2147483648, 2147483647]"
        self._age = value

    @builtins.property
    def gender(self):
        """Message field 'gender'."""
        return self._gender

    @gender.setter
    def gender(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gender' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'gender' field must be an integer in [-2147483648, 2147483647]"
        self._gender = value

    @builtins.property
    def clothes(self):
        """Message field 'clothes'."""
        return self._clothes

    @clothes.setter
    def clothes(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'clothes' field must be of type 'str'"
        self._clothes = value

    @builtins.property
    def hair(self):
        """Message field 'hair'."""
        return self._hair

    @hair.setter
    def hair(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'hair' field must be of type 'str'"
        self._hair = value

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'info' field must be a set or sequence and each value of type 'str'"
        self._info = value
