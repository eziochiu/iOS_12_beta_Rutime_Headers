/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKTitleQuery : NSObject <CHQueryDelegate> {
    <PKTitleQueryDelegate> * _delegate;
    PKDrawing * _drawing;
    CHTitleQuery * _titleQuery;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKTitleQueryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKDrawing *drawing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) CHTitleQuery *titleQuery;
@property (nonatomic, readonly, copy) NSString *transcribedTitle;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)drawing;
- (id)initWithDrawing:(id)arg1;
- (void)pause;
- (void)queryDidUpdateResult:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDrawing:(id)arg1;
- (void)setTitleQuery:(id)arg1;
- (void)start;
- (id)titleQuery;
- (id)transcribedTitle;

@end
