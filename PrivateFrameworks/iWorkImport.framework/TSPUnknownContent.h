/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPUnknownContent : NSObject {
    NSArray * _ignoreAndDropFields;
    NSArray * _ignoreAndPreserveFields;
    NSArray * _messages;
    NSArray * _savedIgnoreAndDropFields;
    NSArray * _savedIgnoreAndPreserveFields;
}

@property (nonatomic, readonly) NSArray *messages;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMessages:(id)arg1 ignoreAndPreserveFields:(id)arg2 ignoreAndDropFields:(id)arg3;
- (void)loadFromUnarchiver:(id)arg1;
- (id)messages;
- (void)saveToArchiver:(id)arg1;
- (void)updateMessageInfo:(struct MessageInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; unsigned int x7; unsigned int x8; struct RepeatedPtrField<TSP::FieldInfo> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedField<unsigned long long> { unsigned long long *x_10_1_1; int x_10_1_2; int x_10_1_3; } x10; int x11; struct RepeatedField<unsigned long long> { unsigned long long *x_12_1_1; int x_12_1_2; int x_12_1_3; } x12; int x13; struct RepeatedField<unsigned int> { unsigned int *x_14_1_1; int x_14_1_2; int x_14_1_3; } x14; int x15; struct FieldPath {} *x16; struct RepeatedPtrField<TSP::FieldPath> { void **x_17_1_1; int x_17_1_2; int x_17_1_3; int x_17_1_4; } x17; unsigned int x18; }*)arg1;
- (void)willModifyObject;

@end
