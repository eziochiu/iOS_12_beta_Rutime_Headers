/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKActivityViewController : UIActivityViewController <UIActivityViewControllerDelegate> {
    <MKActivityViewControllerDelegate> * _activityControllerDelegate;
    MKMapItem * _mapItem;
}

@property (nonatomic) <MKActivityViewControllerDelegate> *activityControllerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)_activityHandler;
- (id /* block */)_completionHandler;
- (id)activityControllerDelegate;
- (id)initWithMapItem:(id)arg1 contact:(id)arg2 applicationActivities:(id)arg3;
- (id)initWithMapItem:(id)arg1 contact:(id)arg2 applicationActivities:(id)arg3 activityProviderDelegate:(id)arg4;
- (id)initWithShareItem:(id)arg1;
- (id)initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 applicationActivities:(id)arg4;
- (id)initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 applicationActivities:(id)arg4 routeProviderDelegate:(id)arg5;
- (void)setActivityControllerDelegate:(id)arg1;

@end
