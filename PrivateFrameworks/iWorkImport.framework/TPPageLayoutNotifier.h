/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPPageLayoutNotifier : NSObject <TPPageControllerLayoutObserver> {
    TPPageController * _pageController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPageController:(id)arg1;
- (void)pageController:(id)arg1 didLayoutPageAtIndex:(unsigned long long)arg2 sectionIndex:(unsigned long long)arg3 syncing:(bool)arg4;
- (void)teardown;

@end
