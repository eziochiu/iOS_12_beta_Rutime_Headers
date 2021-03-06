/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXTransitionDataSourceNode : NSObject {
    <SXTransitionDataSource> * _transitionDataSource;
    unsigned long long  _type;
}

@property (nonatomic, readonly) <SXTransitionDataSource> *transitionDataSource;
@property (nonatomic, readonly) unsigned long long type;

+ (id)nodeWithType:(unsigned long long)arg1 dataSource:(id)arg2;

- (void).cxx_destruct;
- (id)transitionDataSource;
- (unsigned long long)type;

@end
