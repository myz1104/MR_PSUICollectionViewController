//
//  DetailViewController.h
//  testPST
//
//  Created by 曹盛杰 on 13-8-12.
//  Copyright (c) 2013年 曹盛杰. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Test.h"


@interface DetailViewController : PSUICollectionViewController<NSFetchedResultsControllerDelegate>

@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) Test *test;
@property (nonatomic, strong) NSFetchedResultsController *fetchedResultsController;
@end
