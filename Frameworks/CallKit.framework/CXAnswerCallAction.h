/* made by EzioChiu
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXAnswerCallAction : CXCallAction {
    NSDate * _dateConnected;
    bool  _downgradeToAudio;
    struct CGSize { 
        double width; 
        double height; 
    }  _localLandscapeAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  _localPortraitAspectRatio;
}

@property (nonatomic, copy) NSDate *dateConnected;
@property (nonatomic) bool downgradeToAudio;

+ (bool)supportsSecureCoding;
+ (double)timeout;

- (void).cxx_destruct;
- (id)customDescription;
- (id)dateConnected;
- (bool)downgradeToAudio;
- (void)encodeWithCoder:(id)arg1;
- (void)fulfill;
- (void)fulfillWithDateConnected:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGSize { double x1; double x2; })localLandscapeAspectRatio;
- (struct CGSize { double x1; double x2; })localPortraitAspectRatio;
- (void)setDateConnected:(id)arg1;
- (void)setDowngradeToAudio:(bool)arg1;
- (void)setLocalLandscapeAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setLocalPortraitAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)updateAsFulfilledWithDateConnected:(id)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
