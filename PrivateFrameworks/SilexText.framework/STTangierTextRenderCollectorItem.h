/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexText.framework/SilexText
 */

@interface STTangierTextRenderCollectorItem : NSObject {
    NSString * _componentIdentifier;
    UIView<TSDRepDirectLayerHosting> * _directLayerHost;
    STTextTangierFlowInfo * _flowInfo;
    STTextTangierFlowLayout * _flowLayout;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _flowRange;
    STTextTangierFlowStorage * _flowStorage;
    STTextTangierTextLayout * _layout;
    bool  _selectable;
    STTextTangierStorage * _storage;
}

@property (nonatomic, readonly) NSString *componentIdentifier;
@property (nonatomic, retain) UIView<TSDRepDirectLayerHosting> *directLayerHost;
@property (nonatomic, readonly) STTextTangierFlowInfo *flowInfo;
@property (nonatomic, retain) STTextTangierFlowLayout *flowLayout;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } flowRange;
@property (nonatomic, readonly) STTextTangierFlowStorage *flowStorage;
@property (nonatomic, retain) STTextTangierTextLayout *layout;
@property (nonatomic, readonly) bool selectable;
@property (nonatomic, retain) STTextTangierStorage *storage;

- (void).cxx_destruct;
- (void)appendToFlowStorage:(id)arg1;
- (id)componentIdentifier;
- (id)debugDescription;
- (id)description;
- (id)directLayerHost;
- (id)flowInfo;
- (id)flowLayout;
- (id)flowLayoutWithICC:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })flowRange;
- (id)flowStorage;
- (id)initWithStorage:(id)arg1 layout:(id)arg2 directLayerHost:(id)arg3 selectable:(bool)arg4 componentIdentifier:(id)arg5;
- (id)layout;
- (bool)selectable;
- (void)setDirectLayerHost:(id)arg1;
- (void)setFlowLayout:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setStorage:(id)arg1;
- (id)storage;
- (void)updateWithLayout:(id)arg1;

@end
