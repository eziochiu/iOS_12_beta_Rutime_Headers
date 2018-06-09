/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXScrollPositionManager : NSObject <SXScrollPositionManager> {
    <SXScrollPositionRestoring> * _scrollPositionRestoring;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SXScrollPositionRestoring> *scrollPositionRestoring;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)scrollPositionRestoring;
- (void)setScrollPositionRestoring:(id)arg1;
- (void)updateScrollPosition:(id)arg1 animated:(bool)arg2;

@end
