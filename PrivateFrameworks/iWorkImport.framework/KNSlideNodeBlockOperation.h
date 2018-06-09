/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNSlideNodeBlockOperation : NSBlockOperation {
    KNSlideNode * _slideNode;
    long long  _type;
}

@property (nonatomic) KNSlideNode *slideNode;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)initWithSlideNode:(id)arg1 type:(long long)arg2;
- (void)setSlideNode:(id)arg1;
- (void)setType:(long long)arg1;
- (id)slideNode;
- (long long)type;

@end
