/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXWebContentPresentationStateScript : NSObject <SXWebContentScript> {
    unsigned long long  _presentationState;
    WKUserScript * userScript;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *executableScript;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long presentationState;
@property (nonatomic, readonly) bool queueable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WKUserScript *userScript;

- (void).cxx_destruct;
- (id)executableScript;
- (id)identifier;
- (id)initWithPresentationState:(unsigned long long)arg1;
- (unsigned long long)presentationState;
- (bool)queueable;
- (id)userScript;

@end
