//
//  CollectionViewController.h
//  ExampleApp
//
//  Created by Vijay Rajanna on 6/9/15.
//  Copyright (c) 2015 Vijay Rajanna. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CollectionViewController : UICollectionViewController<UICollectionViewDataSource, UICollectionViewDelegate>
@property (weak, nonatomic) IBOutlet UICollectionView *CollectionView;
@end
