/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXWebContentNavigationObserver : NSObject <SXWebContentNavigationObserver> {
    id /* block */  _block;
}

@property (nonatomic, readonly) id /* block */ block;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)block;
- (void)handledNavigationWithURL:(id)arg1;
- (id)initWithBlock:(id /* block */)arg1;

@end
