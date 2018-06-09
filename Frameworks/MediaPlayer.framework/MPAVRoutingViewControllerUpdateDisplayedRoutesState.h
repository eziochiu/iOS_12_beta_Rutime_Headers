/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVRoutingViewControllerUpdateDisplayedRoutesState : NSObject {
    NSArray * _isEqualBoolsArray;
    NSArray * _isUpdatedBoolsArray;
    NSArray * _oldRoutes;
    NSArray * _updatedRoutes;
    NSNumber * _version;
}

@property (nonatomic, copy) NSArray *isEqualBoolsArray;
@property (nonatomic, copy) NSArray *isUpdatedBoolsArray;
@property (nonatomic, copy) NSArray *oldRoutes;
@property (nonatomic, copy) NSArray *updatedRoutes;
@property (nonatomic, copy) NSNumber *version;

- (void).cxx_destruct;
- (id)isEqualBoolsArray;
- (id)isUpdatedBoolsArray;
- (id)oldRoutes;
- (void)setIsEqualBoolsArray:(id)arg1;
- (void)setIsUpdatedBoolsArray:(id)arg1;
- (void)setOldRoutes:(id)arg1;
- (void)setUpdatedRoutes:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)updatedRoutes;
- (id)version;

@end
