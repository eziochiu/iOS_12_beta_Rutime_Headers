/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUCellInvalidationContext : NSObject {
    bool  _animated;
    bool  _invalidateDownloadStatus;
    bool  _invalidateEverything;
    bool  _invalidateLayout;
}

@property (getter=isAnimated, nonatomic) bool animated;
@property (nonatomic) bool invalidateDownloadStatus;
@property (nonatomic) bool invalidateEverything;
@property (nonatomic) bool invalidateLayout;

- (bool)invalidateDownloadStatus;
- (bool)invalidateEverything;
- (bool)invalidateLayout;
- (bool)isAnimated;
- (void)setAnimated:(bool)arg1;
- (void)setInvalidateDownloadStatus:(bool)arg1;
- (void)setInvalidateEverything:(bool)arg1;
- (void)setInvalidateLayout:(bool)arg1;

@end
