/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSAnimationFenceHandle : NSObject <BSInvalidatable, BSXPCCoding, NSCopying, NSSecureCoding> {
    BSMachPortSendRight * _caFence;
    unsigned long long  _fenceName;
    unsigned long long  _handleName;
    BSMachPortSendRight * _preFence;
    BSMachPortSendRight * _preFenceTrigger;
    bool  _shouldTrace;
    int  _valid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long fenceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BSMachPortSendRight *trigger;
@property (getter=isUsable, nonatomic, readonly) bool usable;

+ (id)newFenceHandleForContext:(id)arg1;
+ (id)newSystemFenceHandle;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)CAPort;
- (id)_initWithFence:(id)arg1;
- (id)_initWithFenceName:(unsigned long long)arg1 fence:(id)arg2 preFence:(id)arg3 preFenceTrigger:(id)arg4 shouldTrace:(bool)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)fenceName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)invalidate;
- (bool)isUsable;
- (id)trigger;

@end
