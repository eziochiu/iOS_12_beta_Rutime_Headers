/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusMovementInfo : NSObject <BSXPCCoding, NSCopying> {
    unsigned long long  _heading;
    bool  _isInitialMovement;
    bool  _isVelocityBased;
    _UIFocusMovementInfo * _primaryMovementInfo;
    unsigned long long  _secondaryHeading;
    _UIFocusMovementInfo * _secondaryMovementInfo;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _velocity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=_setHeading:, nonatomic) unsigned long long heading;
@property (getter=_isInitialMovement, setter=_setIsInitialMovement:, nonatomic) bool isInitialMovement;
@property (getter=_isVelocityBased, setter=_setIsVelocityBased:, nonatomic) bool isVelocityBased;
@property (nonatomic, readonly) _UIFocusMovementInfo *primaryMovementInfo;
@property (getter=_secondaryHeading, setter=_setSecondaryHeading:, nonatomic) unsigned long long secondaryHeading;
@property (nonatomic, readonly) _UIFocusMovementInfo *secondaryMovementInfo;
@property (readonly) Class superclass;
@property (getter=_velocity, setter=_setVelocity:, nonatomic) struct CGVector { double x1; double x2; } velocity;

+ (id)_movementWithHeading:(unsigned long long)arg1 isInitial:(bool)arg2;
+ (id)_movementWithHeading:(unsigned long long)arg1 secondaryHeading:(unsigned long long)arg2 velocity:(struct CGVector { double x1; double x2; })arg3 isInitial:(bool)arg4;
+ (id)_movementWithHeading:(unsigned long long)arg1 velocity:(struct CGVector { double x1; double x2; })arg2 isInitial:(bool)arg3;
+ (id)_movementWithVelocity:(struct CGVector { double x1; double x2; })arg1 isInitial:(bool)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isInitialMovement;
- (bool)_isVelocityBased;
- (unsigned long long)_secondaryHeading;
- (void)_setHeading:(unsigned long long)arg1;
- (void)_setIsInitialMovement:(bool)arg1;
- (void)_setIsVelocityBased:(bool)arg1;
- (void)_setSecondaryHeading:(unsigned long long)arg1;
- (void)_setVelocity:(struct CGVector { double x1; double x2; })arg1;
- (struct CGVector { double x1; double x2; })_velocity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)heading;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)primaryMovementInfo;
- (id)secondaryMovementInfo;

@end
