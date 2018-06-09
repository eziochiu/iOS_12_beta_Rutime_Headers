/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXTransitionDataSourceProvider : NSObject <SXTransitionDataSourceProvider> {
    SXComponentController * _componentController;
    SXTransitionDataSourceNode * _currentNode;
    UIScrollView * _scrollView;
}

@property (nonatomic, readonly) SXComponentController *componentController;
@property (nonatomic, retain) SXTransitionDataSourceNode *currentNode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)componentController;
- (id)currentNode;
- (id)initWithComponentController:(id)arg1 scrollView:(id)arg2;
- (id)scrollView;
- (void)setCurrentNode:(id)arg1;
- (id)transitionDataSourceForType:(unsigned long long)arg1;

@end
