/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGadgetDataSource : PXSectionedDataSource {
    NSArray * _gadgets;
}

@property (nonatomic, readonly, copy) NSArray *gadgets;
@property (readonly) bool hasNoContentGadget;

- (void).cxx_destruct;
- (id)gadgetAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)gadgetWithId:(id)arg1;
- (id)gadgets;
- (id)gadgetsOfClass:(Class)arg1;
- (id)gadgetsOfType:(unsigned long long)arg1;
- (bool)hasNoContentGadget;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })indexPathForGadget:(id)arg1;
- (id)init;
- (id)initWithGadgets:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;

@end
