/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

@interface CRKCardPresentationConfiguration : NSObject {
    CRSCardRequest * _cardRequest;
    bool  _respectsUserConsent;
}

@property (nonatomic, readonly) CRSCardRequest *cardRequest;
@property (nonatomic, readonly) <CRContent> *content;
@property (nonatomic) bool respectsUserConsent;

- (void).cxx_destruct;
- (id)cardRequest;
- (id)content;
- (id)initWithCard:(id)arg1;
- (id)initWithCardRequest:(id)arg1;
- (id)initWithContent:(id)arg1;
- (bool)respectsUserConsent;
- (void)setRespectsUserConsent:(bool)arg1;

@end
