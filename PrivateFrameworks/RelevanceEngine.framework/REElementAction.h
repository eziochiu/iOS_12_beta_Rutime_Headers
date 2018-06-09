/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REElementAction : NSObject <NSCoding, NSCopying> {
    <REElementActionDelegate> * _delegate;
}

@property (nonatomic) <REElementActionDelegate> *delegate;

- (void).cxx_destruct;
- (void)_didFinish:(bool)arg1;
- (void)_performWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
