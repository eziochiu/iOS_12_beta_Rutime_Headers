/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKStarsView : TLKStackView {
    double  _currentStarRating;
}

@property double currentStarRating;

+ (id)emptyStar;
+ (id)fullStar;
+ (id)halfStar;
+ (id)starImageWithName:(id)arg1;

- (double)currentStarRating;
- (id)init;
- (void)setCurrentStarRating:(double)arg1;
- (void)updateStarRating:(double)arg1;

@end
