/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXEmbedComponentViewFactory : NSObject <SXComponentViewFactory> {
    <NFResolver> * _resolver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NFResolver> *resolver;
@property (nonatomic, readonly) int role;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)componentViewForComponent:(id)arg1;
- (id)initWithResolver:(id)arg1;
- (id)resolver;
- (int)role;
- (id)type;

@end
