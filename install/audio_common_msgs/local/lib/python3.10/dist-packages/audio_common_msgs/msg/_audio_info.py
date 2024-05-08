# generated from rosidl_generator_py/resource/_idl.py.em
# with input from audio_common_msgs:msg/AudioInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AudioInfo(type):
    """Metaclass of message 'AudioInfo'."""

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
            module = import_type_support('audio_common_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'audio_common_msgs.msg.AudioInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__audio_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__audio_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__audio_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__audio_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__audio_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AudioInfo(metaclass=Metaclass_AudioInfo):
    """Message class 'AudioInfo'."""

    __slots__ = [
        '_channels',
        '_sample_rate',
        '_sample_format',
        '_bitrate',
        '_coding_format',
    ]

    _fields_and_field_types = {
        'channels': 'uint8',
        'sample_rate': 'uint32',
        'sample_format': 'string',
        'bitrate': 'uint32',
        'coding_format': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.channels = kwargs.get('channels', int())
        self.sample_rate = kwargs.get('sample_rate', int())
        self.sample_format = kwargs.get('sample_format', str())
        self.bitrate = kwargs.get('bitrate', int())
        self.coding_format = kwargs.get('coding_format', str())

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
        if self.channels != other.channels:
            return False
        if self.sample_rate != other.sample_rate:
            return False
        if self.sample_format != other.sample_format:
            return False
        if self.bitrate != other.bitrate:
            return False
        if self.coding_format != other.coding_format:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def channels(self):
        """Message field 'channels'."""
        return self._channels

    @channels.setter
    def channels(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'channels' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'channels' field must be an unsigned integer in [0, 255]"
        self._channels = value

    @builtins.property
    def sample_rate(self):
        """Message field 'sample_rate'."""
        return self._sample_rate

    @sample_rate.setter
    def sample_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sample_rate' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sample_rate' field must be an unsigned integer in [0, 4294967295]"
        self._sample_rate = value

    @builtins.property
    def sample_format(self):
        """Message field 'sample_format'."""
        return self._sample_format

    @sample_format.setter
    def sample_format(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sample_format' field must be of type 'str'"
        self._sample_format = value

    @builtins.property
    def bitrate(self):
        """Message field 'bitrate'."""
        return self._bitrate

    @bitrate.setter
    def bitrate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bitrate' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'bitrate' field must be an unsigned integer in [0, 4294967295]"
        self._bitrate = value

    @builtins.property
    def coding_format(self):
        """Message field 'coding_format'."""
        return self._coding_format

    @coding_format.setter
    def coding_format(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'coding_format' field must be of type 'str'"
        self._coding_format = value
