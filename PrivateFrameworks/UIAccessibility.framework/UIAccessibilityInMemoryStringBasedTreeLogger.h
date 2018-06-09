/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

@interface UIAccessibilityInMemoryStringBasedTreeLogger : NSObject <UIAccessibilityElementTraversalTreeLogger> {
    NSMutableArray * _currentPrefix;
    NSString * _descriptionKey;
    NSString * _prefix;
    NSMutableString * _stringRepresentation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithElementDescriptionKey:(id)arg1;
- (id)initWithPrefix:(id)arg1;
- (id)initWithPrefix:(id)arg1 elementDescriptionKey:(id)arg2;
- (void)logElement:(id)arg1;
- (void)pop;
- (void)push;
- (id)stringRepresentation;

@end
