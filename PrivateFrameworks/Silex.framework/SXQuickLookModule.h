/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXQuickLookModule : NSObject <SXQuickLookModule> {
    <NFResolver> * _resolver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NFResolver> *resolver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createViewControllerWithFile:(id)arg1;
- (id)initWithResolver:(id)arg1;
- (id)resolver;

@end
