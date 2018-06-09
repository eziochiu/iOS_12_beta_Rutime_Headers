/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVInteraction : NSObject <SVInteraction> {
    id /* block */  _contextProvider;
    id /* block */  interactionBlock;
}

@property (nonatomic, readonly) id /* block */ contextProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=uponInteraction:, nonatomic, copy) id /* block */ interactionBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)contextProvider;
- (id)initWithContextProvider:(id /* block */)arg1;
- (id /* block */)interactionBlock;
- (void)performWithObject:(id)arg1;
- (void)uponInteraction:(id /* block */)arg1;

@end
