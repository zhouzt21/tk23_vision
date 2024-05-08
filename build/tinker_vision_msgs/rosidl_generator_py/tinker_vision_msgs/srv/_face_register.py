# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tinker_vision_msgs:srv/FaceRegister.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FaceRegister_Request(type):
    """Metaclass of message 'FaceRegister_Request'."""

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
                'tinker_vision_msgs.srv.FaceRegister_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__face_register__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__face_register__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__face_register__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__face_register__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__face_register__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FaceRegister_Request(metaclass=Metaclass_FaceRegister_Request):
    """Message class 'FaceRegister_Request'."""

    __slots__ = [
        '_state',
    ]

    _fields_and_field_types = {
        'state': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.state = kwargs.get('state', int())

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
        if self.state != other.state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'state' field must be an integer in [-2147483648, 2147483647]"
        self._state = value


# Import statements for member types

# Member 'id'
import array  # noqa: E402, I100

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_FaceRegister_Response(type):
    """Metaclass of message 'FaceRegister_Response'."""

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
                'tinker_vision_msgs.srv.FaceRegister_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__face_register__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__face_register__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__face_register__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__face_register__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__face_register__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FaceRegister_Response(metaclass=Metaclass_FaceRegister_Response):
    """Message class 'FaceRegister_Response'."""

    __slots__ = [
        '_success',
        '_fail_info',
        '_id',
        '_info',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'fail_info': 'string',
        'id': 'sequence<int32>',
        'info': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.fail_info = kwargs.get('fail_info', str())
        self.id = array.array('i', kwargs.get('id', []))
        self.info = kwargs.get('info', str())

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
        if self.success != other.success:
            return False
        if self.fail_info != other.fail_info:
            return False
        if self.id != other.id:
            return False
        if self.info != other.info:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def fail_info(self):
        """Message field 'fail_info'."""
        return self._fail_info

    @fail_info.setter
    def fail_info(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'fail_info' field must be of type 'str'"
        self._fail_info = value

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'id' array.array() must have the type code of 'i'"
            self._id = value
            return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'id' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._id = array.array('i', value)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'info' field must be of type 'str'"
        self._info = value


class Metaclass_FaceRegister(type):
    """Metaclass of service 'FaceRegister'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tinker_vision_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tinker_vision_msgs.srv.FaceRegister')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__face_register

            from tinker_vision_msgs.srv import _face_register
            if _face_register.Metaclass_FaceRegister_Request._TYPE_SUPPORT is None:
                _face_register.Metaclass_FaceRegister_Request.__import_type_support__()
            if _face_register.Metaclass_FaceRegister_Response._TYPE_SUPPORT is None:
                _face_register.Metaclass_FaceRegister_Response.__import_type_support__()


class FaceRegister(metaclass=Metaclass_FaceRegister):
    from tinker_vision_msgs.srv._face_register import FaceRegister_Request as Request
    from tinker_vision_msgs.srv._face_register import FaceRegister_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
