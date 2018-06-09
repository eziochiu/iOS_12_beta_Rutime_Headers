/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPLinkMetadataStatusTransformer : NSObject {
    NSURL * _URL;
    <LPLinkMetadataStatusTransformerDelegate> * _delegate;
    LPLinkMetadata * _metadata;
    bool  _wantsStatusItem;
}

@property (nonatomic, readonly, copy) NSURL *actionURL;
@property (nonatomic, readonly, copy) NSURL *canonicalURL;
@property (nonatomic) <LPLinkMetadataStatusTransformerDelegate> *delegate;
@property (nonatomic, retain) LPLinkMetadata *metadata;
@property (nonatomic, readonly, copy) NSAttributedString *statusText;
@property (nonatomic, readonly) bool wantsStatusItem;

- (void).cxx_destruct;
- (id)actionURL;
- (id)canonicalURL;
- (void)dealloc;
- (id)delegate;
- (id)initWithMetadata:(id)arg1 URL:(id)arg2;
- (id)metadata;
- (id)originalURL;
- (void)setDelegate:(id)arg1;
- (void)setMetadata:(id)arg1;
- (id)statusText;
- (bool)wantsStatusItem;

@end