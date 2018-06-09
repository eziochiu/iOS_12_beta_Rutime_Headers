/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXParallaxComponentBehavior : SXComponentBehavior {
    int  _cachedDirection;
}

@property (nonatomic, readonly) int cachedDirection;
@property (nonatomic, readonly) int direction;
@property (nonatomic, readonly) double factor;

+ (id)typeString;

- (int)cachedDirection;
- (int)directionWithValue:(id)arg1 withType:(int)arg2;
- (Class)handlerClassForComponent:(id)arg1;

@end
