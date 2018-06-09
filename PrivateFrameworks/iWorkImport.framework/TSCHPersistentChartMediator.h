/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPersistentChartMediator : TSPObject <TSCHMediatorProvider, TSCHNotifyOnModify> {
    TSCHChartMediator * mMediator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) TSCHChartMediator *mediator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithContext:(id)arg1 andMediator:(id)arg2;
- (void)loadFromArchive:(const struct ChartMediatorArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct RepeatedField<unsigned int> { unsigned int *x_6_1_1; int x_6_1_2; int x_6_1_3; } x6; struct RepeatedField<unsigned int> { unsigned int *x_7_1_1; int x_7_1_2; int x_7_1_3; } x7; }*)arg1;
- (id)mediator;
- (void)saveToArchive:(struct ChartMediatorArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct RepeatedField<unsigned int> { unsigned int *x_6_1_1; int x_6_1_2; int x_6_1_3; } x6; struct RepeatedField<unsigned int> { unsigned int *x_7_1_1; int x_7_1_2; int x_7_1_3; } x7; }*)arg1;

@end
