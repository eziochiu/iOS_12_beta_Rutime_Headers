/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIInputViewSetNotificationInfo : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _beginCenter;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _beginFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    bool  _changedAccessoryOnly;
    bool  _dueToRotation;
    double  _duration;
    struct CGPoint { 
        double x; 
        double y; 
    }  _endCenter;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _endFrame;
    bool  _forceNotification;
    unsigned long long  _options;
    bool  _wasCausedRemotely;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } beginCenter;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } beginFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) bool changedAccessoryOnly;
@property (nonatomic) bool dueToRotation;
@property (nonatomic) double duration;
@property (nonatomic) struct CGPoint { double x1; double x2; } endCenter;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } endFrame;
@property (nonatomic) bool forceNotification;
@property (nonatomic) unsigned long long options;
@property (nonatomic, readonly) NSDictionary *privateUserInfo;
@property (nonatomic, readonly) NSDictionary *userInfo;
@property (nonatomic) bool wasCausedRemotely;

+ (id)info;

- (struct CGPoint { double x1; double x2; })beginCenter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })beginFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (bool)changedAccessoryOnly;
- (bool)containsChange;
- (bool)dueToRotation;
- (double)duration;
- (struct CGPoint { double x1; double x2; })endCenter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })endFrame;
- (bool)forceNotification;
- (id)init;
- (id)inverseInfo;
- (void)logGeometry;
- (unsigned long long)options;
- (void)populateEndInfoWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)populateStartInfoWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)populateWithAnimationStyle:(id)arg1;
- (id)privateUserInfo;
- (id)rotationUserInfo;
- (void)setBeginCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setBeginFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setChangedAccessoryOnly:(bool)arg1;
- (void)setDueToRotation:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setEndCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setEndFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setForceNotification:(bool)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setWasCausedRemotely:(bool)arg1;
- (id)userInfo;
- (bool)wasCausedRemotely;

@end
