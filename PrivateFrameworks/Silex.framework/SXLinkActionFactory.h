/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXLinkActionFactory : NSObject <SXActionFactory> {
    <SXURLActionFactory> * _URLActionFactory;
}

@property (nonatomic, readonly) <SXURLActionFactory> *URLActionFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URLActionFactory;
- (id)actionForAddition:(id)arg1;
- (id)actionForURL:(id)arg1;
- (id)initWithURLActionFactory:(id)arg1;

@end