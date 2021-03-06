/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXAdResponse : NSObject {
    SXADBannerView * _bannerView;
    SXAdRequest * _request;
}

@property (nonatomic, retain) SXADBannerView *bannerView;
@property (nonatomic, retain) SXAdRequest *request;

- (void).cxx_destruct;
- (id)bannerView;
- (id)request;
- (void)setBannerView:(id)arg1;
- (void)setRequest:(id)arg1;

@end
