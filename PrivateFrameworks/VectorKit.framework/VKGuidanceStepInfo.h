/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKGuidanceStepInfo : NSObject {
    NSString * _roadName;
    int  _routePoint;
}

@property (nonatomic, readonly, retain) NSString *roadName;
@property (nonatomic, readonly) int routePoint;

- (void)dealloc;
- (id)initWithRoadName:(id)arg1 point:(int)arg2;
- (id)roadName;
- (int)routePoint;

@end
