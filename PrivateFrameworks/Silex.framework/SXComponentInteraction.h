/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentInteraction : NSObject {
    SXComponentView * _componentView;
    <SXComponentInteractionHandler> * _handler;
    unsigned long long  _types;
}

@property (nonatomic, readonly) SXComponentView *componentView;
@property (nonatomic, readonly) <SXComponentInteractionHandler> *handler;
@property (nonatomic, readonly) unsigned long long types;

- (void).cxx_destruct;
- (id)componentView;
- (id)handler;
- (bool)handlesType:(unsigned long long)arg1;
- (id)initWithComponentView:(id)arg1 handler:(id)arg2 types:(unsigned long long)arg3;
- (unsigned long long)types;

@end
