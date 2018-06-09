/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMPrototype : NSObject {
    IKDOMElement * _domElement;
    NSString * _identifier;
    IKDOMRules * _rules;
    NSString * _selector;
    NSString * _type;
}

@property (nonatomic, readonly) IKDOMElement *domElement;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) IKDOMRules *rules;
@property (nonatomic, readonly, copy) NSString *selector;
@property (nonatomic, readonly, copy) NSString *type;

+ (id)prototypeWithDOMElement:(id)arg1;

- (void).cxx_destruct;
- (id)_derivativeWithDataItem:(id)arg1;
- (id)domElement;
- (id)identifier;
- (id)initWithDOMElement:(id)arg1 selector:(id)arg2;
- (id)instantiateDOMElement;
- (id)rules;
- (id)selector;
- (id)type;
- (id)variantForDataItem:(id)arg1;

@end
