/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPCSSVariable : NSObject {
    bool  _important;
    NSString * _name;
}

@property (getter=isImportant, nonatomic, readonly) bool important;
@property (nonatomic, readonly, copy) NSString *name;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 important:(bool)arg2;
- (bool)isImportant;
- (id)name;
- (id)variableByResolvingWithThemePath:(id)arg1;

@end
