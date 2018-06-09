/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDCmdBehavior : PDAnimateBehavior {
    int  mBehaviorType;
    bool  mHasBehaviorType;
}

- (int)behaviorType;
- (bool)hasBehaviorType;
- (void)setBehaviorType:(int)arg1;

@end
