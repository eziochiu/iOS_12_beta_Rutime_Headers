/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKQuadTrie : NSObject {
    void * __root;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    }  _initialRegion;
    unsigned int  _maxItems;
    struct { 
        double width; 
        double height; 
    }  _minSize;
}

- (id)_itemsInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)allItems;
- (id)breadthFirstDescription;
- (void)clearAllItemsPerforming:(id /* block */)arg1;
- (bool)contains:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)depthFirstDescription;
- (id)description;
- (void)foreach:(id /* block */)arg1;
- (id)initWithInitialRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 minimumSize:(struct { double x1; double x2; })arg2 maximumItems:(unsigned int)arg3;
- (void)insert:(id)arg1;
- (id)itemDescriptions;
- (id)itemsInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)itemsPassingRectTest:(id /* block */)arg1 coordinateTest:(id /* block */)arg2;
- (bool)remove:(id)arg1;

@end
