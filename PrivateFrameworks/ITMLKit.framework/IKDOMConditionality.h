/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMConditionality : NSObject {
    NSSet * _dependentPropertyPaths;
    IKDOMElement * _domElement;
    NSArray * _expressions;
    NSString * _identifier;
}

@property (nonatomic, readonly, copy) NSSet *dependentPropertyPaths;
@property (nonatomic, readonly) IKDOMElement *domElement;
@property (nonatomic, readonly, copy) NSArray *expressions;
@property (nonatomic, readonly, copy) NSString *identifier;

+ (id)_applyOnDOMElement:(id)arg1 withDOMElement:(id)arg2;
+ (id)conditionalityWithDOMElement:(id)arg1;

- (void).cxx_destruct;
- (void)applyOnDOMElement:(id)arg1;
- (id)dependentPropertyPaths;
- (id)domElement;
- (id)expressions;
- (id)identifier;
- (id)initWithDOMElement:(id)arg1;
- (bool)passesForDataItem:(id)arg1;

@end
