"""autogenerated by genpy from mavros/RadioStatus.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class RadioStatus(genpy.Message):
  _md5sum = "04e4a879bb2687140da50a1a821e2190"
  _type = "mavros/RadioStatus"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """# RADIO_STATUS message

Header header

# message data
uint8 rssi
uint8 remrssi
uint8 txbuf
uint8 noise
uint8 remnoise
uint16 rxerrors
uint16 fixed

# calculated
float32 rssi_dbm
float32 remrssi_dbm

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

"""
  __slots__ = ['header','rssi','remrssi','txbuf','noise','remnoise','rxerrors','fixed','rssi_dbm','remrssi_dbm']
  _slot_types = ['std_msgs/Header','uint8','uint8','uint8','uint8','uint8','uint16','uint16','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,rssi,remrssi,txbuf,noise,remnoise,rxerrors,fixed,rssi_dbm,remrssi_dbm

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(RadioStatus, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.rssi is None:
        self.rssi = 0
      if self.remrssi is None:
        self.remrssi = 0
      if self.txbuf is None:
        self.txbuf = 0
      if self.noise is None:
        self.noise = 0
      if self.remnoise is None:
        self.remnoise = 0
      if self.rxerrors is None:
        self.rxerrors = 0
      if self.fixed is None:
        self.fixed = 0
      if self.rssi_dbm is None:
        self.rssi_dbm = 0.
      if self.remrssi_dbm is None:
        self.remrssi_dbm = 0.
    else:
      self.header = std_msgs.msg.Header()
      self.rssi = 0
      self.remrssi = 0
      self.txbuf = 0
      self.noise = 0
      self.remnoise = 0
      self.rxerrors = 0
      self.fixed = 0
      self.rssi_dbm = 0.
      self.remrssi_dbm = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_5B2H2f.pack(_x.rssi, _x.remrssi, _x.txbuf, _x.noise, _x.remnoise, _x.rxerrors, _x.fixed, _x.rssi_dbm, _x.remrssi_dbm))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 17
      (_x.rssi, _x.remrssi, _x.txbuf, _x.noise, _x.remnoise, _x.rxerrors, _x.fixed, _x.rssi_dbm, _x.remrssi_dbm,) = _struct_5B2H2f.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_5B2H2f.pack(_x.rssi, _x.remrssi, _x.txbuf, _x.noise, _x.remnoise, _x.rxerrors, _x.fixed, _x.rssi_dbm, _x.remrssi_dbm))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 17
      (_x.rssi, _x.remrssi, _x.txbuf, _x.noise, _x.remnoise, _x.rxerrors, _x.fixed, _x.rssi_dbm, _x.remrssi_dbm,) = _struct_5B2H2f.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_3I = struct.Struct("<3I")
_struct_5B2H2f = struct.Struct("<5B2H2f")
