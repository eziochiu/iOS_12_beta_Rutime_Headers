/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PHActivityViewController : UIActivityViewController <PUActivityDataSource> {
    NSArray * __PHActivityItems;
}

@property (setter=_setPHActivityItems:, nonatomic, copy) NSArray *_PHActivityItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_PHActivityItems;
- (void)_setPHActivityItems:(id)arg1;
- (void)_updateActivityItems:(id)arg1;
- (id)activityItemsForActivity:(id)arg1;
- (id)activityViewControllerForActivity:(id)arg1;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;

@end
