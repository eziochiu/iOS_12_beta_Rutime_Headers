/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDynamicAnimationActiveValue : NSObject {
    id  _applier;
    double  _boundaryPull;
    unsigned int  _lowerBoundary;
    double  _maximumActiveValue;
    double  _minimumActiveValue;
    int  _type;
    unsigned int  _upperBoundary;
    double  _value;
}

@property (nonatomic) double maximumActiveValue;
@property (nonatomic) double minimumActiveValue;
@property (nonatomic) int type;
@property (nonatomic) double value;

+ (id)activeValue:(double)arg1 ofType:(int)arg2;
+ (id)lowerBoundary:(double)arg1 ofType:(int)arg2;
+ (id)upperBoundary:(double)arg1 ofType:(int)arg2;

- (void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2;
- (id /* block */)_applier;
- (double)_boundaryPull;
- (bool)_isLowerBoundary;
- (bool)_isUpperBoundary;
- (void)_setBoundaryPull:(double)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (double)maximumActiveValue;
- (double)minimumActiveValue;
- (void)setMaximumActiveValue:(double)arg1;
- (void)setMinimumActiveValue:(double)arg1;
- (void)setType:(int)arg1;
- (void)setValue:(double)arg1;
- (int)type;
- (double)value;

@end
