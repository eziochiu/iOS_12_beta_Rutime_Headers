/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WXOAVReadState : OAVReadState {
    NSMutableDictionary * mNextVmlShapeIdToTextBoxMap;
    WDParagraph * mParagraph;
    WXReadState * mWxState;
}

- (id)currentParagraph;
- (void)dealloc;
- (id)initWithWXReadState:(id)arg1;
- (id)nextVmlShapeIdToTextBoxMap;
- (void)setCurrentParagraph:(id)arg1;
- (id)wxReadState;

@end
