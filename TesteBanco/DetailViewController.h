//
//  DetailViewController.h
//  TesteBanco
//
//  Created by Cássio on 26/07/13.
//  Copyright (c) 2013 Wisdomtech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
