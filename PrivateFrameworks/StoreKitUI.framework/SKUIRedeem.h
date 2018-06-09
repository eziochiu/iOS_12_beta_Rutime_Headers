/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRedeem : NSObject <NSSecureCoding> {
    double  _ITunesPassLearnMoreAlertInterval;
    NSString * _balance;
    NSString * _credit;
    NSString * _creditDisplay;
    NSURL * _customizedThankyouURL;
    NSArray * _downloads;
    <SKUIArtworkProviding> * _headerArtworkProvider;
    UIImage * _headerImage;
    bool  _hideItemView;
    NSString * _inAppPurchase;
    NSArray * _items;
    NSArray * _links;
    NSString * _message;
    NSURL * _redirectURL;
    NSDictionary * _thankYouDictionary;
    NSString * _title;
}

@property (nonatomic) double ITunesPassLearnMoreAlertInterval;
@property (nonatomic, copy) NSString *balance;
@property (nonatomic, copy) NSString *credit;
@property (nonatomic, copy) NSString *creditDisplay;
@property (nonatomic, retain) NSURL *customizedThankyouURL;
@property (nonatomic, retain) NSArray *downloads;
@property (nonatomic, retain) <SKUIArtworkProviding> *headerArtworkProvider;
@property (nonatomic, retain) UIImage *headerImage;
@property (nonatomic) bool hideItemView;
@property (nonatomic, retain) NSString *inAppPurchase;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic, retain) NSArray *links;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) NSURL *redirectURL;
@property (nonatomic, retain) NSDictionary *thankYouDictionary;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)ITunesPassLearnMoreAlertInterval;
- (id)balance;
- (id)credit;
- (id)creditDisplay;
- (id)customizedThankyouURL;
- (id)downloads;
- (void)encodeWithCoder:(id)arg1;
- (id)headerArtworkProvider;
- (id)headerImage;
- (bool)hideItemView;
- (id)inAppPurchase;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)items;
- (id)links;
- (id)message;
- (id)redirectURL;
- (void)setBalance:(id)arg1;
- (void)setCredit:(id)arg1;
- (void)setCreditDisplay:(id)arg1;
- (void)setCustomizedThankyouURL:(id)arg1;
- (void)setDownloads:(id)arg1;
- (void)setHeaderArtworkProvider:(id)arg1;
- (void)setHeaderImage:(id)arg1;
- (void)setHideItemView:(bool)arg1;
- (void)setITunesPassLearnMoreAlertInterval:(double)arg1;
- (void)setInAppPurchase:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setLinks:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setRedirectURL:(id)arg1;
- (void)setThankYouDictionary:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)thankYouDictionary;
- (id)title;

@end
