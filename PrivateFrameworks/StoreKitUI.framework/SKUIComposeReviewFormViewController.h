/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIComposeReviewFormViewController : SUViewController <SKUIComposeReviewViewDelegate> {
    SKUIComposeReviewView * _composeView;
    <SKUIComposeReviewFormDelegate> * _delegate;
    SKUIReviewMetadata * _review;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIComposeReviewFormDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) SKUIReviewMetadata *editedReviewMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancel;
- (void)_submit;
- (void)composeReviewViewValidityChanged:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)editedReviewMetadata;
- (id)initWithReviewMetadata:(id)arg1;
- (void)loadView;
- (void)setDelegate:(id)arg1;
- (void)setRating:(float)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
