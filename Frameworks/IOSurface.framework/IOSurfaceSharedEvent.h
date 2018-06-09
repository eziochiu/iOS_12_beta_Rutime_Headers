/* made by EzioChiu
   Image: /System/Library/Frameworks/IOSurface.framework/IOSurface
 */

@interface IOSurfaceSharedEvent : NSObject <NSSecureCoding> {
    unsigned int  _eventPort;
    unsigned long long  _globalTraceObjectID;
}

@property (readonly) unsigned int eventPort;
@property (readonly) unsigned long long globalTraceObjectID;
@property unsigned long long signaledValue;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)eventPort;
- (unsigned long long)globalTraceObjectID;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMachPort:(unsigned int)arg1;
- (void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(id /* block */)arg3;
- (void)setSignaledValue:(unsigned long long)arg1;
- (unsigned long long)signaledValue;

@end
