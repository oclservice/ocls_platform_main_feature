<?php
/**
 * @file
 * ocls_basic_pages.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function ocls_basic_pages_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'body\' => array(),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => array(
        \'source\' => \'node/1\',
        \'alias\' => \'partner-institutions\',
        \'language\' => \'und\',
      ),
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Partner Institutions\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'0a369398-cae7-4655-970e-a083ddbf1df0\',
      \'vid\' => NULL,
      \'vuuid\' => \'7d1a1822-ffa6-4391-887b-396d2c80bf25\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'seneca-libraries-logo.png\',
            \'uri\' => \'public://seneca-libraries-logo.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'9403\',
            \'status\' => \'1\',
            \'timestamp\' => \'1502372594\',
            \'uuid\' => \'75976fae-13fc-4be4-91f2-2388f37dede9\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1100\',
            \'height\' => \'120\',
            \'node_export_file_data\' => \'iVBORw0KGgoAAAANSUhEUgAABEwAAAB4CAYAAADopWcSAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAJF1JREFUeNrsnbFT3MiXx3socvDlV3Bs6ADW3pzZKlwXmg28qccJDpeNTOZxhqNlQ5N4nC7BD4dXpmqHfPFC4KpLjh3+gR/mL+D6MU/rWVma0UjqVkv6fKq6xoYZqfv1k5j31evXndvbWwMAAAAAAAAAAF9YwAQAAAAAAAAAAP8EwQQAAAAAAAAAIAaCCQAAAAAAAABADAQTAAAAAAAAAIAYCCYAAAAAAAAAADEQTAAAAAAAAAAAYiCYAAAAAAAAAADEQDABAAAAAAAAAIiBYAIAAAAAAAAAEAPBBAAAAAAAAAAgxmJInbl4cL9rX5Zt29AfdWd85LNt5/pvef28/vHTkGkFAAAAAAAAgCJ0bm9vKznxxYP7Iox0J9p6iYe/MmMBZSiviCgAAAAAAAAAMA/eBZOLB/d79mXbtseex/rejAWU4/WPn0ZMPQAAAAAAAACk4UUw0WySXW1LAYz7wraBQTwBAAAAAAAAgAScCyYXD+73TThCyVesf/zUwQ0AAAAAAAAAYBJnRV+1gOvAthXMDAAAAAAAAAB1wsm2wppV8rtBLAEAAAAAAACAGlJ6hsnFg/sD+/IU0wIAAAAAAABAXSlVMLl4cF+28l3HrAAAAAAAAABQZ0pbkqOZJYglAAAAAAAAAFB7ShFMtGYJy3AAAAAAAAAAoBEUFkx0N5yXmBIAAAAAAAAAmkKhGiYXD+4vm/HWwT451dehbavapB8sBwIAaCCdTqdrXz7f3t6eYw0AAAAA8EXRoq+7xs/Wwe9sG6x//DSc9ibNdpG2bRBQAACagmxTf6r3dwAAAAAAL3Rub29zfVCzS0a2LTns33vbdtc/fhrl6N+qGQsnU0Ude+wObgAAEPAfqk5H/lCd2r9XXawBAAAAAL4okmEiYoRLseTV+sdP/bwfVpHlQJpmnvQMhWkBAAAAAAAAIANFir7uOuzXuyJiSRxZymNbz/7zv2x7ZdsNUw8AAAAAAAAAaeQSTHS5i6saISJmOBFjJOtEhRjpP8IJAAAAAAAAACSSN8Ok67BPUtz1s8tBy/EnhBMAAAAAAAAAgH8QomBy7GvwroUZAAAAAAAAAKgneQWTVUwHAAAAAAAAAE0lr2CygekAAAAAAAAAoKnkFUxcbie8zbQAAAAAAAAAQJUsBtgnEUx2mZq/dyOSJhk9yxO/kp991hYxlP+vf/x0juXwi7b6hbXNsvmSARe3zyQjbcJ56PWM7LiisURzn8ZQX7kXAAAAeKLT6azZly3b5PWhbff0Nc6ZbdcTrye3t7dnWBAg4OvbXqR5vrzfOu7XK93Fpm2BsARFIhh1NdjLm8lzqoHTcV2Cplig240CXdv/3YyfjwSEjQnxQNr5hIAg/x7VLZBss19ksEtkE5nrzYKHvDJfhJRR5DvWVkPP4+pOjEvaSsExneu8D+s67/aLqPzNObV/r7oB9OWFfdmP/9z2rVMze8bZs2N47co+JRIFGZfajmy/LwOyo8uxntmxntTs2hVfeJHy6+d2PIcBXxONm0uX174nO86LiBGPHNpTRJEd256kiCNZEd840v4eEZ4CIJhk5Zn9cj9ogUgigd6uBsQrDk4hAZPY8aDMp+i23/2cH50URswMAeDU9rk7I2Du5bTdezPekek4xOwCT35xYDxs412yXbbNF/Foxcc5rX06jse0POHHm46Hc6N+f1An8QTBBMFkBhKASuB9aMdw3aAgO40osDqsga/924yftCeKCHYM37VEMAliLhFMSrOjZJG8ULGkEfczAKinYCL8bL/UHzRUKJEv/n0PAdIk7+Sc1qajEvovAd7bKoJVB7YrzS419AsJoA9MyYJayTZZNWPxSHxuyff5PQgmMt8vKzDtqfr9sCYBPoJJDYKmigSTCAkuXvsKNAIIDiWweh2qcGLtI8Hkmxlv+y6E5QhtmUsEE3d/Axz5xPO6ZZUBNJG8RV8vPPXvFxtMHOsT2EYgAbFtEqD8bvyKJcJT284LZIdMBpED+/KrZ9ttOLKd2OUve+yDqnytQr9Y0mB9VIZflGyTVdvEz/6y7acqxBIPYxR/q6pmk/jZ7+J3KkoB1J17Gsj8YYOahy0YrzzlfmPHGup4n2R4zw5uW4u5bD2SVSLzY/wJwuITH1SgAYAKySuYjDz28bEGc726B0YSkJtqhJKvAmTbl3Nd0pIbrS9y4cl+Esz/6dh2EpQXtksOvxgE5herFV8rk0LJ04bfg7dN9ULQpvo9O5RBk4LPPzTDoQ08DG28EwUwZ/FE60BAoHMJd/58Ny8mW52SaEnNnm2PUtqetizZI/v2/G+YBYDqyLtLzlCFDJ/B3FsVTWqRQh4LACUAl7oBKwF1a13m0fZtt2CtmF0N9l3ZLlqKse7JLjJHf9rzOq+ho8tvjk1YmRPrGjz37PiPK7hWZL77poHZJCn0A+mH2PtfPvwe2kmRJUsafEu7Z77sQLFl0mtjRMgTe+N5yYqcq8yijQ91zNHuG6GNN42kgP/EfC2iyBw+UbuFBnMZph3nofDSPBVLPsy430QiSdYi1JFQ8lrP8USvmTSRcce+59oee4+/JgD+yVvDRASAPyvstxTs3A2h5kQGW0mw/zbwbhaqFWPHODJhiUFl4Sx4VGHgl7aOP8EesjRFBJrN0IzgqoaJCma/t3ne5/jCSg2T8u0Zx2kNExf2sefa0mB71tN4J3UyXNeDSDjfmo51Z0bwVnldkJRirz9qQBifr8qLv7ZlLiuqYeLMjh78QuZGMkvSBK5rHd9hSefb0vtnWibLj+yiA+CfXEtydHeFqwr7LdktUnNiEPLae11W8LYGfvCL9jUvg4ZeH281qHXhF7/UZPw9D9eJCLCjEMUSx/Tb5PcAZSPFEG17LkGlGW/bmsabhoz3Up8wy3inBU2/VRxkJokAlxroJS1BeNi2uh11mUu4Ey/SxBLx5W/KzALSAq+PTPpSnX2WsAH4Z6HAZ48D6H9UrDM44USD4jrVX3haIDgeNvgaKbXocA39wqlooscW/2nLEpxo3HK/2myL3wM4Dj7PZgQZD5tUE0KDbcnWSAvU1iouFJlU7PVQ+y7iQNKShZ2W+m7oc9laNNsjzS9lJ65HLnbj0mOKTySJwGuGQskA3ikimIS03W9QwkkNg+LJ4DhP4cfzBl8jEsgP8AsnmTY9M87AapVYovRr4PcHBqA+gee0IEN40cAxS3ZNmkhUSVA1pdjrZBZFkjjQ6uKvIc4lpN4zznS+XN/P9vAHgDDILZho/ZB3gY2ncuFEa1PUeWePuW1nfeFzw6+Tx0UFA93lp85+UXamTc/UY7mai3vEck184SnbDUPNgs5pQcZaQ5d9hDbexGKvsUKYSUtQouKvbaZtvhssM3Z5+tHT/UwEtBP8AaB6Fgp+vh/qF30zFk4OfKaVa1DtojbFjRmLUz/Y9v1E+9mUv61v3oyKq4ZfK/2CfvHSkV/86tEvjku6TqRmSZuzF3ZzXFunE+2iDn4PUAVTggxjsm1zW7fxngU23iTR4yjW58uUPu+03HfP2uS7gZMm3h1m3AWnLPAHgABYLPJhyTKxwc8rR8FgGfxkW0+EEwnQXGZCTOzyUTYilOym9H0o49JlNANT3tKGTd1WdjDHZ0ammTvlTNpkQwset9kvtotsNzxhDx/LcK70XNLO47ZSIUua2Gndoy/1pvRX5u48atPuWdp/OZbLbJVtA1A/TlICCvnZ6xaN1+tTaN0aNV4g8zqlKOZRQp/vir9WvcMPcwlT7H3iuR9nc/YPABywWPQA9gt9XwOz9UDHKIGZCDq7siyiyPa5MzhwEAS+s/3tZZiDYw2eytzqWQLu4wCX27zTAPhzLKjreQjC5RzzZgcMHPTrlVx3VfmFKSYAiT1cC2uSebM7S/Czvx+qQNHXpSfbOr/O+qdLkSaP/17tOZx3m/So/yoIDx35/5L4kJ4LoC6kBRlrLRuv75ogqcVe44iI0ul09hP6KFkmz/Hdyuey7UzbGccn1ynnvGaKAPyxUNJxehqkhIwEE7J97nnZBSz1eGU/5T3NIpZMBE/yRPpVyfbaDWj+xL++FZuIECAB3ESTfq5q8OmS7Rx+8diBX/Qr9IuVvLvmqLD62PEcyZKV1Tmzo+6y5URMtU386Ac9jgt29djP5AuwPZ9k7AzmFUsS5thlJkjXANQIXZYzTxDU1PF6S9vXmg+ZBRMlqZZJ24u/sgQjDB6mzM+1Z38409144u05UwTgj1IEE/3CvluTMUsmzO9ahLMs+g76meeYZWfPhDSn29OWw2gmjATyLus7rMxZBHPgoA+9APxibt/UpTgDxz4iGVndollRKsiJSCD1YN478OOuiiSlZW9pBogr3+/ypxIAZpAklpzNqPeQJKZQ/BUAAIKirAwTo090n9Vo7C8126RQUVjNItgsuW8XeVLgNQArM8BbyptNUDKnWeyh43ct8nQz+oXYbcWBX4xy+kWZGRMrObaflnlxuWTqouy51+yl7ZKPOXJog2NHx13lTyUAzCCpYOu07JKoyOlZxmMBVI5mUgFAy1go82A1FE0k22Sku3bkpR9Y4HNecl96AczTYJ4g17hbTjFP8LgbmF8Mq/ILFSVdC1nbLdjeuipWMAHULKhJW9Jx0jJTXHuyd2KxV5O85CZO0nsesm1qNXMJf5OWGYVfArSQhbIPWEPRRJ56D/OIJvqZTQd9KiJ6lB0Yb/rcmrkkoWDgsC/dDH4h73FRBLnI3I5K7svjOfzCdXbJK8eZG3XB2XUawD0AYB4ezhkE1ZpOp5NW38LXbjOJWwlnrPeQloXSyiyTAOYSpt8rqCUD0EIWXBxURRNZ/39TEzvkFU16jvoT2pPyKrcWvciROXBcsb16Afr4qEK/cGkPucccGHB9nW5gXqgRbQs6K9sCNWex179RUSXpvW0t/hrKdrZtJ83eT1iWA9A+Fl0dWJZGqAAhwet6DWwRiSarcwTorgIUKUobWiA2qEugL/Nn7Xdl3CwlWMUv/qY7yy+01onLJR3HLMW5s/PAsHQGICIpOyHrEpE6slVhkJ1W7HUeceokYc6i4q+HLfPdKucSviD3iv2En9/Tn/+IiQDaw4LLg+tWnSKavKqJPUQ0yZSdoGJQWwKUKp8u512eNHLUn5UZftE1bpefhEQ3w3tcZycdmxYjAq9tYoOnBgAk4+GFBjVxXvveEtTTeLdSguyTOUWLvMxd7DWO7acEp5cZj91k3616LuGLT4o/TssyeYGVANrDgo+TrH/81Lcv3xq3xTjLQmp2ZClQud0iP1mpYQ2DYcAiQmP8ourrRLYAbttNW65FydzRrJK/bHvMnzKAu4BTljMkBTLXpoGZCrpkZT/l1689nD+p2KuQJ5MnaX5aU/y16rmEue2+j2gC0B4WfJ3IBjbntkkwKQVhrwK3Sz+DQNBtma9UlWVSt+UWrfILzahJ+534jMtsm9OW2HhVBZID24Ya/P3LkFUCMBlwSmD9wSRnlzxvWnaJBti/meSaF5JNU9VynMOctk4TWXZa4LshzCXEULvPEk1+o6YJQPNZ9H1CLQg7sF/8e2a8JW+Iy1okyJNCkr0ABYSqkPEOKzjvuefPFWWzZX6xOuV33UB9I1hEHNFrbUPt51p0AmhCwClPeqctxTlq2HglsH6TEmCLYLHnoQ9pxV5z2VqWQNhjSoAaX5Iiyx/2mricKpS5hKm8Vp9My3SSa2DLzuNrk18sBIDAWazqxDUQTuSJ7nJSQUnNPmlbEFO3JTneM1M02G0b08a80bQ5duAzkTASNcQRgGyBZlQUVISStCe8jQo4dQnMkxShIhrvc0/dSerDZcFsiCPztWDSyOKvgc0lpCACiJ2rR2acvZYmmkTLqV6ocHKkNVAAoCEsVt2BgIUTCVykTwcVBIIhsszlUkg8wB7lU8sME905KGoIJADZAkwRRdY0aHk4JdCMkKyE1zUd60MNwu5NjHnLJGfQCPJU+7Xn8RYu9poQnB7ase8njHPH1FQwqclcwnS/zCKaGPNFOJGlOiL+HTUtuw2grSyG0pFAhRPpywHiwR0bXC7YKIHVKb9zvTypNhkmmpW2q/cUtv+F1mEDiFtPp5IMh70KdxXZ16DfF4caYF96nMstk5zVc1jSeOLFNO+Kv1Ywp42fy4baMaI00VSX2nyn48hS7PUue8i+P9rO/ATxBKC+LITWIRFObJMg7AdTfVHH9ZTir4gHkEQbhbRVpj0d3dGmb8bbXL80iCUArhCh5EcblDxqwRasElBLIPiNLNuoIMBOrF1SUv2GthV/rXouYQ50iZ9km2S9x9xT35XisP/WIrE7uqQQAGrCQqgdk+1CdVed7021wkkXNwGAedGlNyMzFkpYegPgBgnSJYjZa8kTXMlCkMB6r4rgWgO9JPGiFNur2JUUjD5pYJBZ6VxCbh+VbJHvZO7MWPDKSlSPR4r8Ip4A1IiF0Du4/vHTsOLtiMkmAZhfLOi2eOySVTIw461/EUoA3BLVDfhDn+C+0SUjTUXEig8TY12r4PxxLksWqw6nBJvMJQSB1Nyx7Rszv3ASMSmevNFCwAAQIIt16ehEjZO+GT+x9YXvwE+yafoBTsFnLpdKeSf+j1/8g9XQjKFL+IZyy8JlAbwTZT/s6Ba1rwvu2lKXsfoscFt6sdcEjjSQTDr3IXMJISHCifilCrVPTL7lY9H8X6qPs0UxQEAs1q3D6x8/9W1QcqzBYxODEsmoGeKaEGOEX3zFakidQSwBmMqjggFl9PR9crecaansErxs6W4Vzz0GH4empOUpE+Ne0/GkZSBIUc0119vQTin2WupSKN2V5DAh8PRd/LWxc+mZw7J9JCNelzmpOHsiopcZCyeRgDIP4heTWxQjnAAEwGIdO20Dx3NN+R/Y9tjx6TZxE4C5GXk4R2hFdmVHrSrEkhu9F4o9nuJ6ECIuMj10CcPWjMBEfr5m3/vcU6B96SqrRbeo3dfxxrl7Ou04OyGt2KuLwFQC7KQn9fIzX2JCk+fSq3DR4EyvpHudCBxR1sm92D0qa72SaKnhC713scMOQIUs1LXj6x8/fbZNiipeVHB6lqcATL8+Rx5OE0x9IS3w6luskJpOz6ytl22TLYtHeB60CQnUtY7Aj/a/UktgL+WtEpx+qHuNCBF8ZBegKePcdzVG18VeE8YqAXaSENOI4q9VziV4nedrETt0B6T/sD+Se9Vrkz37RXxdisO+wZoA1bHQgDF0zfgJq0/O2xAEQlB+sYp5vyKk7K8Dj+cSkfh72X5dazsBEJiMxZO77VlN8i4rUeDRhGBbxpkmVLxwdNokseTa8ZPvxhd/rWguobr5PtJdkeQ+JTvtZBVPJOvoD3bUAaiG2gsmkmliX3YbNCfLuGVtcZl5tFpDezjP/rp4cL9ygdH2oWdfVjycSoThn+09b4N6NgCpAYkEH/LkPkk0edigIHRvSmDlIqjyUew1TpqQ0LTdRHzPJYRxrzqbEE/knjVr2dJdphyWA/DPQkPGcezzZI6DFWqm1Bcyj/7JyMM5tgMYpw/BVsQnEUoOuMwAZgYi1xqAJD25fdGEpQ4qDB36EBSmFHs99DDGJNFkq0nLVXzOJQTrAye6RCtN7I2Qwsf7WAzAL40QTDTL5NTR4a+mBDBuIqMAnppDbj+8cnT4pRr6xbmHc/SqHKDujOO60Kvca7qe6sIANCUAEdEkrWhmU7JM0gKrrZLPkxS0nzgq9vrVeVJ+vtMwl/U1lxD2fUuuK1mqM02MfKEiJgB4YgETzGRUQTDYw+y1xaVfdGtmi6GHc6zojllV4ePcPRXjAGC+4EOCjqSgvilLHdKWrDws6wS+i72mzGHStqpNE0yczyXU6t4lO0FNFU2wEoA/5hJMZCcI2wb6VDU0XAUUowqCwW1cs7a4XB5Wq1o9Huts9Cscpuusn3eyjTqXFUDpgWjtlzpoFk2SIFTmcpU0YeJNp9O59dFM8las9+zvGiOaeJpLqJdPPJ9y/9piFyUAf8ybYSIBkGydObp4cL8f2FhciTjnFQTGK1pIEurHEL/4B+89nGOz4iwTlxxzSQEUIm1JR1OCjcRlMSWm7IcsSjStvofruYT6IaLJdUv8HyBY5hJMNC1c1tMv2fbSBimjEAI4zXhxVSx1OMUWpw6H1Q80kwemXyMj43Z3mD4BfyJVFUPtOj5+KEtxVrm6oUlBqGnOUoc0QajwkqMpxV5DoWlP2Z3NJdQTzTxiuRZAxeSpYTIpIMhWmm9tYD+s+Amvq6UKVzPS4QcOx7RSYRD4FSLe2EbQVH3wLlkmdfILEUxuPHRlPSS7NBCufahrwNF0wSSNMoSEOjzB3mmBG7P0ot2ctPQeBhAMRQWTCMnu+F2FE6/1NzRYcyWYHGf4vctg8GnVGTxiX6lbY8a1XNi9J7vfuPSLnwLyC3n6kZoJpZlYvrJMvNpFz9WWL7Jku0HTaMpT+zMXB9VirwgmDZhLqD1NX1YIEDyLOT4zLeNChBOpJyBbq/YlUHK5u4MuWZFgbMnRKaY+sZax6VPtlw7nSDJ45FwDzwFx14yFqMf6oxvbB+opZKCFfjGrKKncC5566qLYZdn26cDR+OWes61jkiyw/7HtPx2OR841DMCtu1zZALVCltO8LvB5EUuSRCWpqXBZ0Zh2zNcizl3xV91Nh7mEQugSryQh4tLTNtpfIctybL+YHIAKmVswkRoNKoisTHnb3VIdERzseyXIPih7pwd7XMl2kGBx3ZFtTrUexSwONIBccjhPb3W8fQ8C1GQwOAliyXx48wvrE053z1G/6Ol45vYLvWe8M/5Ek19U2CltO17NZOslzOn/2vbfDsfSkwLbGccxctgPWfK0mvGeCBBSANTo+g82mDpxFEztpASNhxXOpbwkZb3Izw6ZSygB8aX9hJ/vGUQrgNaykPNzw4zvW9Ig6U8tEHtQdMnOxFKAP407scSYjMU1NZDxUTvhJ9vOXdSKibaLNuPlFW9NshiGYDJPdOnRL/Tacu0XvxT0CxEabjxOgWTA3O3mlbd4stZn6ano+5cZZwxNiiVXHq6LpTn8yPX2wwOubKghaev8m778IbdQZIP2hyl2q1SUEEHBJGe3NH2LVYq++iPtvlDZTkVTRN9LpgvAD4s5Pzc08z8tXtGgXwI8+f+pfsGXNpLXtKeoGgxKhkXXfFkK4JL3ti/DOYLjvgpB6477JTaUWjEXGkTlWvKkAaTYclvbUsY5hzlQv+iZ6dlYofnF9oRvzPKLzMu0dJlS34yFF18sqcixq6LHsd5nRlPGH91npM3aeUvsPNT7mUue6vKr3gwbi6B6Y9xlNW2qgLbrMtMNwJNgct2gMV4nBNVFCkKm1QUJIYtD+rCf0uc95hIKkiZCVClabSGYANRXMCn85TsekHgIPLIgAUcvx+fkM3/6isXNOBPkrQbJMh+R8DSaDAh1KU8UCK5qIDivsPOeACk32xX5xan6xcihX8x1H5C6IiosbnqegyjT7enEfUaum8inl00+sXMQXR/GvZD7VIXjvpkuiB0bt0uf5NhdFb+OuS9ADUgLNk4aNMYzU9IT8CnFXg91i9OqkS1WmyyYlDaXMD9Sp8ReA4milWQxVVTHZGuKrwCAB3IJJhnrmNSVXHUP9OnuMw1YfbIeD/YcCE8sx8k7OWO/+Nn4zawwxo8gmccvRDA5D+DeUTQbbHLLcbGDj8y3qDZUJJRG96mhZDNN9OWpx35EwtydYFt2rSqAgsH/WpuDjZwBXlqx1yAEJg1oj0zLir9WGKy3EfGvnRTh4tDzvE/brQrBBMATCwU+O2ygPX4tshOM7ljyroF2yTLXm1xOqX5x0FC/OM5hCwnyRTS5acrY9bq/8u1W5osoNpzoy7Hnvsj5ZdnTv3ReAUJiP+Xn11oPoymkBdJ56nqkFXs9CiygTeIJcwklkHZveFHRPezenP0EgJJBMPnCuzJ2G9E6A00Kji8q3hljIziD5Cgi2kC/OM27HEOzELo1H3/8/tevcB5C6IsIYAcGIBAk22BKAN20LITLkmwWZLHXOCreNLX4K1kk4frXmvUvb6KJ3sNS6wkFskQOoBUgmIx5N6ugYouD40EGAcGlqLGc83MuA/IN/KLYMi0VTb439cw0+arYrWaZnFbQl4ME21bRlwH1TCAUNNB4k/JrCTLasj3ovOJBWnB2FODYDuccQ9vmEoqRdo/Yt/cX5zVmZtzDjGGLYwCv5BZMNOvgpgE2+LVMsSQWHP/aksDYpWDSzfk5l33aKOgX71riF7NsMdT5vWnI2H0vNbqasoSw57kvZJdA5Uh2gW2/zQo0GvhkNq2Wwb05bJdWK+Eo0NoZaSLOTtvnEoqjtXDS5uKDChqu7mMvZtzD9qhnA+CXhYKfH9Z47BJMPCtjGc6UgFCO/czUV1i6yrgcx2Xtgs08S2CM2wyTXkG/6NXcL0pbpqWZJiJAXdRo/McpY/ls/ApA/Sl2HXnsy7uKl+1By7EBxhPbJMD4PzO9jsWZDTTa9GR2nqyEoIu9JgS0EjAmiSb3XAazNZlLKIfnJn378Tcizpa5BEwyV2z7w6TXXmrjPQwgCBYLfn5o/OwOUTaSrt7z8SVf0uNtwC92Gpj6FUadmUVgx7bqwQd2zRx1GWyfRJBYcjmtMu4i/tN0v5jTFmLHDd2q9mXog59WGFp3RerqvdGlD17p0hsTQF/ILtEvuxWe/iz0rImS7RPV2dgy2bdglQD7URN9TwrYWvsWDbKTRIbrwHedSdotx+jPDls8l6GxVvH90eQp8mw/c2b7LVtVp2V7iJ+JWCu+dpKnMPJEZteOSa4f1Ip7GEDolCGY3Dj+Ml5qkCHBd5GdcAoEhF0N5CUorMt2zIMM7+l76Meutd1BlhoJmo3io08SJG6X6BcHNbqOjh1dJ31ri2O1Ragi0vsM44iEimOH13o/o01d9+WUrYT/5kOF55Yv0SfYJxVJrX/U8CKJZwkBV6YgtS7FXhMC2iPb98sEMWGr5tvw5p7LQJlWvNQXnZw+dqgC1ptZ49P3nUzci9OW9Kxp2zKzRZI23cMAgqXQkhz5omybBKg/mHG9jqtAxyn9kuU3q77Fkpi9RICQ5QevArbVne5g28+zAiENxJ566M+Syf4Uu2/8CFKP7fi3S/SLVfWLkJfpnGbxixLuKV29p1wFOP6DrOPQa91FHaObWdklHvtCdgmEzlFLAo3LKWJIloA2icOazO88Y2r6XELJaJbV84xvFxFkX9uHlCbii9QpyTqfrw1iCUClLJRxEBEhpF6HCBL2v99KUGXGT2KrDv6kuOb3KpQMQjC4ZEnIk3S11TNTzc4aSbzX/vyX7duGbVMDId0Zx6f49NSec3dGn3r25SePfRqUtUPQhF8s6zyEUNPjZsIv7omQMcsvSrxOjvUa+d5kyOpwbAMRGr7V8Q/nnNNdHUOZ1/lBTv8quy9XVQrQABmCTgkyfmxJoJH2NPtJhs8mveesJhkaTdwtp8hcgjvR5Lspc+OCE72H7SGWAFRLx16ETk+gAWXXjJ9wSlt3eDp5Ij3UQH5Yl20utQ7ItjZfSxFO1VbDeYLAiT6LjZcrMNduUoaD2nBQQX/Ex3oufG3CL3qOr5vS/MLDNeLDFlcT95DjEsewof2XceTNghIBZ7Wov6k9dwv25ZkvIbrT6cgfqlP796pb+R/N8Q4G+4H9GXk0zxp9tWecvTKKCQZgH8k4OMpTTyCnXzqxY46+yNPqPxJ+dWn7882Uz6VtX/o88Polk2OQp/ZbRcbQhLkMYZwpxw9B8OiUOD9yj5Pmaucib/cwAAhEMEn5si5feldjbXmOQEgCmtFEk8DuvC4CyQzbiB3iIlPRJSanaqdztdMQ16+1X0TXTyv9Qm3RjV0neeu/3ETjn7iPjDyMYbLvq1PmM7rXRQzKFilUPIl8asPMFkLv/EQyojwGEAgmCCZJnEy8ypNfr8VvQwqytT+yS9DaPH1KERvEht/U5an2FNFHCnE+astcIpj4EUx0nCKWRLVZihbkvTZfap+csGUwAIIJFAtqVvW/04IaCfw+a0CDMNJ8v5j0hVb7hQqxZkKA4Ppoyh+qgAQTAACAib9PIpjIcqnJYq5JRAKvCCQi8IowIllDZ1gRIPDrHMEEAAAC/0KKYAIAAAAA3lnABAAAAAAAAAAA/wTBBAAAAAAAAAAgBoIJAAAAAAAAAEAMBBMAAAAAAAAAgBgIJgAAAAAAAAAAMRBMAAAAAAAAAABiIJgAAAAAAAAAAMRAMAEAAAAAAAAAiIFgAgAAAAAAAAAQA8EEAAAAAAAAACDGIiYAAIDA+d62z5gBAAAAAHzSub29xQoAAAAAAAAAABOwJAcAAAAAAAAAIAaCCQAAAAAAAABADAQTAAAAAAAAAIAYCCYAAAAAAAAAADEQTAAAAAAAAAAAYiCYAAAAAAAAAADEQDABAAAAAAAAAIiBYAIAAAAAAAAAEAPBBAAAAAAAAAAgxv8LMACl3ws4AJNQ5wAAAABJRU5ErkJggg==\',
          ),
        ),
      ),
      \'field_repository_name\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Seneca Libraries\',
            \'format\' => NULL,
            \'safe_value\' => \'Seneca Libraries\',
          ),
        ),
      ),
      \'field_repository_namespace\' => array(
        \'und\' => array(
          array(
            \'value\' => \'seneca\',
            \'format\' => NULL,
            \'safe_value\' => \'seneca\',
          ),
        ),
      ),
      \'field_repository_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://seneca.ocls.dgicloud.com/islandora/object/seneca:root\',
            \'format\' => NULL,
            \'safe_value\' => \'https://seneca.ocls.dgicloud.com/islandora/object/seneca:root\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => FALSE,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Seneca\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'institution\',
      \'uid\' => \'1\',
      \'uuid\' => \'0e43a73f-bc80-4c58-ac61-5ec1c76dfd5c\',
      \'vid\' => NULL,
      \'vuuid\' => \'84dbec21-b900-4954-9377-4a0001c22d91\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'fleming_png.png\',
            \'uri\' => \'public://fleming_png.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'14922\',
            \'status\' => \'1\',
            \'timestamp\' => \'1502372549\',
            \'uuid\' => \'3709d6f8-34ef-41c3-b8a8-8a2e81b2cc17\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1000\',
            \'height\' => \'146\',
            \'node_export_file_data\' => \'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\',
          ),
        ),
      ),
      \'field_repository_name\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Fleming\',
            \'format\' => NULL,
            \'safe_value\' => \'Fleming\',
          ),
        ),
      ),
      \'field_repository_namespace\' => array(
        \'und\' => array(
          array(
            \'value\' => \'fleming\',
            \'format\' => NULL,
            \'safe_value\' => \'fleming\',
          ),
        ),
      ),
      \'field_repository_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://fleming.ocls.dgicloud.com/islandora/object/fleming:root\',
            \'format\' => NULL,
            \'safe_value\' => \'https://fleming.ocls.dgicloud.com/islandora/object/fleming:root\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => FALSE,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Fleming College\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'institution\',
      \'uid\' => \'1\',
      \'uuid\' => \'301da6dd-7482-43f8-a12d-8353194b2d24\',
      \'vid\' => NULL,
      \'vuuid\' => \'ee03b509-8a9c-4d51-87c0-77ca40d28434\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<div>\\r\\n<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean semper, est eu faucibus mattis, felis eros pretium lectus, non maximus lacus neque nec arcu. Fusce at sem non mi eleifend euismod sit amet vitae purus. Cras nec cursus ante. Nunc eget ipsum eleifend, ornare mauris eu, convallis neque. Aliquam sollicitudin lacus sed enim tincidunt, at pellentesque arcu egestas. Donec non nisi dapibus, bibendum libero et, scelerisque nulla. Donec vitae volutpat augue. Duis ut risus cursus, lobortis nulla ut, dictum sapien. Mauris consequat sem eget ante fermentum feugiat. Aliquam ultricies leo vel augue scelerisque, nec dignissim nisl volutpat. Suspendisse consectetur condimentum diam et ullamcorper. Donec rhoncus sit amet ante at placerat. Morbi ac laoreet mauris. Integer bibendum efficitur felis, cursus ornare ligula auctor eget.</p>\\r\\n\\r\\n<p>Nulla eu augue sapien. Quisque risus enim, bibendum ac ipsum et, sagittis dictum enim. Integer ac tellus sapien. Donec sed fermentum nunc. Pellentesque ultricies varius orci et sollicitudin. Donec consectetur dolor a volutpat congue. Nunc at arcu ut diam fringilla hendrerit.</p>\\r\\n\\r\\n<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean nec vehicula sem, ut lobortis sapien. Cras dictum eleifend placerat. Donec quam erat, feugiat vitae lacus nec, porttitor auctor ligula. Nam erat magna, rhoncus non felis a, imperdiet cursus elit. Donec commodo diam quis erat sagittis condimentum. Nam consectetur enim rutrum egestas ultricies. Morbi a dui faucibus, ullamcorper nisl in, iaculis orci. Donec vehicula scelerisque nulla imperdiet malesuada. Mauris at tortor non lacus blandit ultricies ac vitae urna. Curabitur a metus magna. Aliquam bibendum et ligula vitae congue. Suspendisse aliquam sit amet sem a sagittis. Donec pretium metus sit amet mi maximus vehicula. Ut luctus ultrices massa, ac auctor nisl gravida sed. Etiam eget elit enim.</p>\\r\\n\\r\\n<p>Duis scelerisque nisi nec est malesuada lobortis. Maecenas sem neque, auctor ut efficitur quis, venenatis sit amet quam. Vivamus sed hendrerit tellus, a molestie est. Sed suscipit diam quis odio accumsan commodo rutrum eu leo. In ultricies nisl ipsum, quis pharetra ipsum bibendum ac. Nam sed arcu id diam rutrum pharetra at sed nunc. Duis non neque nulla. In et quam risus. Aenean vestibulum ante eu magna auctor, at consequat massa imperdiet.</p>\\r\\n\\r\\n<p>Suspendisse et sapien ac turpis tristique commodo. Vivamus tempor lobortis purus ut malesuada. Aliquam sed nisl vitae quam malesuada placerat ac maximus ante. Sed iaculis finibus blandit. Curabitur tempus urna felis, nec egestas purus tincidunt quis. Cras venenatis, sem at imperdiet fermentum, velit eros rhoncus purus, vel iaculis nulla ipsum quis tellus. Phasellus pretium sem sit amet fringilla venenatis. Cras luctus augue elit, vel lobortis nulla lacinia ac. Duis vel tempus lorem. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Maecenas id urna nisl. Sed in suscipit ligula.</p>\\r\\n</div>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean semper, est eu faucibus mattis, felis eros pretium lectus, non maximus lacus neque nec arcu. Fusce at sem non mi eleifend euismod sit amet vitae purus. Cras nec cursus ante. Nunc eget ipsum eleifend, ornare mauris eu, convallis neque. Aliquam sollicitudin lacus sed enim tincidunt, at pellentesque arcu egestas. Donec non nisi dapibus, bibendum libero et, scelerisque nulla. Donec vitae volutpat augue. Duis ut risus cursus, lobortis nulla ut, dictum sapien. Mauris consequat sem eget ante fermentum feugiat. Aliquam ultricies leo vel augue scelerisque, nec dignissim nisl volutpat. Suspendisse consectetur condimentum diam et ullamcorper. Donec rhoncus sit amet ante at placerat. Morbi ac laoreet mauris. Integer bibendum efficitur felis, cursus ornare ligula auctor eget.</p>\\n<p>Nulla eu augue sapien. Quisque risus enim, bibendum ac ipsum et, sagittis dictum enim. Integer ac tellus sapien. Donec sed fermentum nunc. Pellentesque ultricies varius orci et sollicitudin. Donec consectetur dolor a volutpat congue. Nunc at arcu ut diam fringilla hendrerit.</p>\\n<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean nec vehicula sem, ut lobortis sapien. Cras dictum eleifend placerat. Donec quam erat, feugiat vitae lacus nec, porttitor auctor ligula. Nam erat magna, rhoncus non felis a, imperdiet cursus elit. Donec commodo diam quis erat sagittis condimentum. Nam consectetur enim rutrum egestas ultricies. Morbi a dui faucibus, ullamcorper nisl in, iaculis orci. Donec vehicula scelerisque nulla imperdiet malesuada. Mauris at tortor non lacus blandit ultricies ac vitae urna. Curabitur a metus magna. Aliquam bibendum et ligula vitae congue. Suspendisse aliquam sit amet sem a sagittis. Donec pretium metus sit amet mi maximus vehicula. Ut luctus ultrices massa, ac auctor nisl gravida sed. Etiam eget elit enim.</p>\\n<p>Duis scelerisque nisi nec est malesuada lobortis. Maecenas sem neque, auctor ut efficitur quis, venenatis sit amet quam. Vivamus sed hendrerit tellus, a molestie est. Sed suscipit diam quis odio accumsan commodo rutrum eu leo. In ultricies nisl ipsum, quis pharetra ipsum bibendum ac. Nam sed arcu id diam rutrum pharetra at sed nunc. Duis non neque nulla. In et quam risus. Aenean vestibulum ante eu magna auctor, at consequat massa imperdiet.</p>\\n<p>Suspendisse et sapien ac turpis tristique commodo. Vivamus tempor lobortis purus ut malesuada. Aliquam sed nisl vitae quam malesuada placerat ac maximus ante. Sed iaculis finibus blandit. Curabitur tempus urna felis, nec egestas purus tincidunt quis. Cras venenatis, sem at imperdiet fermentum, velit eros rhoncus purus, vel iaculis nulla ipsum quis tellus. Phasellus pretium sem sit amet fringilla venenatis. Cras luctus augue elit, vel lobortis nulla lacinia ac. Duis vel tempus lorem. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Maecenas id urna nisl. Sed in suscipit ligula.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => array(
        \'link_title\' => \'Contact\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-45\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => FALSE,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Contact\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'4d8b6a52-aebb-4386-b2f2-4799f5d940ce\',
      \'vid\' => NULL,
      \'vuuid\' => \'9dea58ec-1d94-4244-a6d9-35d3bc379d40\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'CORe-logo.jpg\',
            \'uri\' => \'public://CORe-logo_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'5406\',
            \'status\' => \'1\',
            \'timestamp\' => \'1502372113\',
            \'uuid\' => \'47bead10-867e-4c96-b44b-8c268f4c0bf2\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'206\',
            \'height\' => \'76\',
            \'node_export_file_data\' => \'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\',
          ),
        ),
      ),
      \'field_repository_name\' => array(
        \'und\' => array(
          array(
            \'value\' => \'CORe\',
            \'format\' => NULL,
            \'safe_value\' => \'CORe\',
          ),
        ),
      ),
      \'field_repository_namespace\' => array(
        \'und\' => array(
          array(
            \'value\' => \'islandora\',
            \'format\' => NULL,
            \'safe_value\' => \'islandora\',
          ),
        ),
      ),
      \'field_repository_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'http://discoverygarden-vagrant-ocls.local/islandora/object/islandora:root\',
            \'format\' => NULL,
            \'safe_value\' => \'http://discoverygarden-vagrant-ocls.local/islandora/object/islandora:root\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => FALSE,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => "Colleges\' Object Repository",
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'institution\',
      \'uid\' => \'1\',
      \'uuid\' => \'7620f194-7864-4617-abf3-2b2ab1601147\',
      \'vid\' => NULL,
      \'vuuid\' => \'4043a656-af6b-4ba1-bc64-606d506ba646\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<div>\\r\\n<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean semper, est eu faucibus mattis, felis eros pretium lectus, non maximus lacus neque nec arcu. Fusce at sem non mi eleifend euismod sit amet vitae purus. Cras nec cursus ante. Nunc eget ipsum eleifend, ornare mauris eu, convallis neque. Aliquam sollicitudin lacus sed enim tincidunt, at pellentesque arcu egestas. Donec non nisi dapibus, bibendum libero et, scelerisque nulla. Donec vitae volutpat augue. Duis ut risus cursus, lobortis nulla ut, dictum sapien. Mauris consequat sem eget ante fermentum feugiat. Aliquam ultricies leo vel augue scelerisque, nec dignissim nisl volutpat. Suspendisse consectetur condimentum diam et ullamcorper. Donec rhoncus sit amet ante at placerat. Morbi ac laoreet mauris. Integer bibendum efficitur felis, cursus ornare ligula auctor eget.</p>\\r\\n\\r\\n<p>Nulla eu augue sapien. Quisque risus enim, bibendum ac ipsum et, sagittis dictum enim. Integer ac tellus sapien. Donec sed fermentum nunc. Pellentesque ultricies varius orci et sollicitudin. Donec consectetur dolor a volutpat congue. Nunc at arcu ut diam fringilla hendrerit.</p>\\r\\n\\r\\n<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean nec vehicula sem, ut lobortis sapien. Cras dictum eleifend placerat. Donec quam erat, feugiat vitae lacus nec, porttitor auctor ligula. Nam erat magna, rhoncus non felis a, imperdiet cursus elit. Donec commodo diam quis erat sagittis condimentum. Nam consectetur enim rutrum egestas ultricies. Morbi a dui faucibus, ullamcorper nisl in, iaculis orci. Donec vehicula scelerisque nulla imperdiet malesuada. Mauris at tortor non lacus blandit ultricies ac vitae urna. Curabitur a metus magna. Aliquam bibendum et ligula vitae congue. Suspendisse aliquam sit amet sem a sagittis. Donec pretium metus sit amet mi maximus vehicula. Ut luctus ultrices massa, ac auctor nisl gravida sed. Etiam eget elit enim.</p>\\r\\n\\r\\n<p>Duis scelerisque nisi nec est malesuada lobortis. Maecenas sem neque, auctor ut efficitur quis, venenatis sit amet quam. Vivamus sed hendrerit tellus, a molestie est. Sed suscipit diam quis odio accumsan commodo rutrum eu leo. In ultricies nisl ipsum, quis pharetra ipsum bibendum ac. Nam sed arcu id diam rutrum pharetra at sed nunc. Duis non neque nulla. In et quam risus. Aenean vestibulum ante eu magna auctor, at consequat massa imperdiet.</p>\\r\\n\\r\\n<p>Suspendisse et sapien ac turpis tristique commodo. Vivamus tempor lobortis purus ut malesuada. Aliquam sed nisl vitae quam malesuada placerat ac maximus ante. Sed iaculis finibus blandit. Curabitur tempus urna felis, nec egestas purus tincidunt quis. Cras venenatis, sem at imperdiet fermentum, velit eros rhoncus purus, vel iaculis nulla ipsum quis tellus. Phasellus pretium sem sit amet fringilla venenatis. Cras luctus augue elit, vel lobortis nulla lacinia ac. Duis vel tempus lorem. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Maecenas id urna nisl. Sed in suscipit ligula.</p>\\r\\n</div>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean semper, est eu faucibus mattis, felis eros pretium lectus, non maximus lacus neque nec arcu. Fusce at sem non mi eleifend euismod sit amet vitae purus. Cras nec cursus ante. Nunc eget ipsum eleifend, ornare mauris eu, convallis neque. Aliquam sollicitudin lacus sed enim tincidunt, at pellentesque arcu egestas. Donec non nisi dapibus, bibendum libero et, scelerisque nulla. Donec vitae volutpat augue. Duis ut risus cursus, lobortis nulla ut, dictum sapien. Mauris consequat sem eget ante fermentum feugiat. Aliquam ultricies leo vel augue scelerisque, nec dignissim nisl volutpat. Suspendisse consectetur condimentum diam et ullamcorper. Donec rhoncus sit amet ante at placerat. Morbi ac laoreet mauris. Integer bibendum efficitur felis, cursus ornare ligula auctor eget.</p>\\n<p>Nulla eu augue sapien. Quisque risus enim, bibendum ac ipsum et, sagittis dictum enim. Integer ac tellus sapien. Donec sed fermentum nunc. Pellentesque ultricies varius orci et sollicitudin. Donec consectetur dolor a volutpat congue. Nunc at arcu ut diam fringilla hendrerit.</p>\\n<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean nec vehicula sem, ut lobortis sapien. Cras dictum eleifend placerat. Donec quam erat, feugiat vitae lacus nec, porttitor auctor ligula. Nam erat magna, rhoncus non felis a, imperdiet cursus elit. Donec commodo diam quis erat sagittis condimentum. Nam consectetur enim rutrum egestas ultricies. Morbi a dui faucibus, ullamcorper nisl in, iaculis orci. Donec vehicula scelerisque nulla imperdiet malesuada. Mauris at tortor non lacus blandit ultricies ac vitae urna. Curabitur a metus magna. Aliquam bibendum et ligula vitae congue. Suspendisse aliquam sit amet sem a sagittis. Donec pretium metus sit amet mi maximus vehicula. Ut luctus ultrices massa, ac auctor nisl gravida sed. Etiam eget elit enim.</p>\\n<p>Duis scelerisque nisi nec est malesuada lobortis. Maecenas sem neque, auctor ut efficitur quis, venenatis sit amet quam. Vivamus sed hendrerit tellus, a molestie est. Sed suscipit diam quis odio accumsan commodo rutrum eu leo. In ultricies nisl ipsum, quis pharetra ipsum bibendum ac. Nam sed arcu id diam rutrum pharetra at sed nunc. Duis non neque nulla. In et quam risus. Aenean vestibulum ante eu magna auctor, at consequat massa imperdiet.</p>\\n<p>Suspendisse et sapien ac turpis tristique commodo. Vivamus tempor lobortis purus ut malesuada. Aliquam sed nisl vitae quam malesuada placerat ac maximus ante. Sed iaculis finibus blandit. Curabitur tempus urna felis, nec egestas purus tincidunt quis. Cras venenatis, sem at imperdiet fermentum, velit eros rhoncus purus, vel iaculis nulla ipsum quis tellus. Phasellus pretium sem sit amet fringilla venenatis. Cras luctus augue elit, vel lobortis nulla lacinia ac. Duis vel tempus lorem. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Maecenas id urna nisl. Sed in suscipit ligula.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => array(
        \'link_title\' => \'FAQs\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-46\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => FALSE,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'FAQs\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'7ab584f0-6372-4520-9283-42064a546a08\',
      \'vid\' => NULL,
      \'vuuid\' => \'639fca39-89dd-4521-a55e-4cb872fe16e0\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'conestoga-logo.jpg\',
            \'uri\' => \'public://conestoga-logo.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'25163\',
            \'status\' => \'1\',
            \'timestamp\' => \'1502371991\',
            \'uuid\' => \'8610b875-cc69-463c-9720-0377b4c3c627\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'295\',
            \'height\' => \'61\',
            \'node_export_file_data\' => \'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AAAAAAAAUnNsdFVudEYjUHhsQFIAAAAAAAAAAAAKdmVjdG9yRGF0YWJvb2wBAAAAAFBnUHNlbnVtAAAAAFBnUHMAAAAAUGdQQwAAAABMZWZ0VW50RiNSbHQAAAAAAAAAAAAAAABUb3AgVW50RiNSbHQAAAAAAAAAAAAAAABTY2wgVW50RiNQcmNAWQAAAAAAAAAAABBjcm9wV2hlblByaW50aW5nYm9vbAAAAAAOY3JvcFJlY3RCb3R0b21sb25nAAAAAAAAAAxjcm9wUmVjdExlZnRsb25nAAAAAAAAAA1jcm9wUmVjdFJpZ2h0bG9uZwAAAAAAAAALY3JvcFJlY3RUb3Bsb25nAAAAAAA4QklNA+0AAAAAABAASAAAAAEAAgBIAAAAAQACOEJJTQQmAAAAAAAOAAAAAAAAAAAAAD+AAAA4QklNBA0AAAAAAAQAAABaOEJJTQQZAAAAAAAEAAAAHjhCSU0D8wAAAAAACQAAAAAAAAAAAQA4QklNJxAAAAAAAAoAAQAAAAAAAAACOEJJTQP1AAAAAABIAC9mZgABAGxmZgAGAAAAAAABAC9mZgABAKGZmgAGAAAAAAABADIAAAABAFoAAAAGAAAAAAABADUAAAABAC0AAAAGAAAAAAABOEJJTQP4AAAAAABwAAD/////////////////////////////A+gAAAAA/////////////////////////////wPoAAAAAP////////////////////////////8D6AAAAAD/////////////////////////////A+gAADhCSU0EAAAAAAAAAgABOEJJTQQCAAAAAAAEAAAAADhCSU0EMAAAAAAAAgEBOEJJTQQtAAAAAAAGAAEAAAACOEJJTQQIAAAAAAAQAAAAAQAAAkAAAAJAAAAAADhCSU0EHgAAAAAABAAAAAA4QklNBBoAAAAAA0kAAAAGAAAAAAAAAAAAAAA9AAABJwAAAAoAVQBuAHQAaQB0AGwAZQBkAC0AMgAAAAEAAAAAAAAAAAAAAAAAAAAAAAAAAQAAAAAAAAAAAAABJwAAAD0AAAAAAAAAAAAAAAAAAAAAAQAAAAAAAAAAAAAAAAAAAAAAAAAQAAAAAQAAAAAAAG51bGwAAAACAAAABmJvdW5kc09iamMAAAABAAAAAAAAUmN0MQAAAAQAAAAAVG9wIGxvbmcAAAAAAAAAAExlZnRsb25nAAAAAAAAAABCdG9tbG9uZwAAAD0AAAAAUmdodGxvbmcAAAEnAAAABnNsaWNlc1ZsTHMAAAABT2JqYwAAAAEAAAAAAAVzbGljZQAAABIAAAAHc2xpY2VJRGxvbmcAAAAAAAAAB2dyb3VwSURsb25nAAAAAAAAAAZvcmlnaW5lbnVtAAAADEVTbGljZU9yaWdpbgAAAA1hdXRvR2VuZXJhdGVkAAAAAFR5cGVlbnVtAAAACkVTbGljZVR5cGUAAAAASW1nIAAAAAZib3VuZHNPYmpjAAAAAQAAAAAAAFJjdDEAAAAEAAAAAFRvcCBsb25nAAAAAAAAAABMZWZ0bG9uZwAAAAAAAAAAQnRvbWxvbmcAAAA9AAAAAFJnaHRsb25nAAABJwAAAAN1cmxURVhUAAAAAQAAAAAAAG51bGxURVhUAAAAAQAAAAAAAE1zZ2VURVhUAAAAAQAAAAAABmFsdFRhZ1RFWFQAAAABAAAAAAAOY2VsbFRleHRJc0hUTUxib29sAQAAAAhjZWxsVGV4dFRFWFQAAAABAAAAAAAJaG9yekFsaWduZW51bQAAAA9FU2xpY2VIb3J6QWxpZ24AAAAHZGVmYXVsdAAAAAl2ZXJ0QWxpZ25lbnVtAAAAD0VTbGljZVZlcnRBbGlnbgAAAAdkZWZhdWx0AAAAC2JnQ29sb3JUeXBlZW51bQAAABFFU2xpY2VCR0NvbG9yVHlwZQAAAABOb25lAAAACXRvcE91dHNldGxvbmcAAAAAAAAACmxlZnRPdXRzZXRsb25nAAAAAAAAAAxib3R0b21PdXRzZXRsb25nAAAAAAAAAAtyaWdodE91dHNldGxvbmcAAAAAADhCSU0EKAAAAAAADAAAAAI/8AAAAAAAADhCSU0EFAAAAAAABAAAAAI4QklNBAwAAAAACnMAAAABAAAAoAAAACEAAAHgAAA94AAAClcAGAAB/9j/7QAMQWRvYmVfQ00AAf/uAA5BZG9iZQBkgAAAAAH/2wCEAAwICAgJCAwJCQwRCwoLERUPDAwPFRgTExUTExgRDAwMDAwMEQwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwBDQsLDQ4NEA4OEBQODg4UFA4ODg4UEQwMDAwMEREMDAwMDAwRDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDP/AABEIACEAoAMBIgACEQEDEQH/3QAEAAr/xAE/AAABBQEBAQEBAQAAAAAAAAADAAECBAUGBwgJCgsBAAEFAQEBAQEBAAAAAAAAAAEAAgMEBQYHCAkKCxAAAQQBAwIEAgUHBggFAwwzAQACEQMEIRIxBUFRYRMicYEyBhSRobFCIyQVUsFiMzRygtFDByWSU/Dh8WNzNRaisoMmRJNUZEXCo3Q2F9JV4mXys4TD03Xj80YnlKSFtJXE1OT0pbXF1eX1VmZ2hpamtsbW5vY3R1dnd4eXp7fH1+f3EQACAgECBAQDBAUGBwcGBTUBAAIRAyExEgRBUWFxIhMFMoGRFKGxQiPBUtHwMyRi4XKCkkNTFWNzNPElBhaisoMHJjXC0kSTVKMXZEVVNnRl4vKzhMPTdePzRpSkhbSVxNTk9KW1xdXl9VZmdoaWprbG1ub2JzdHV2d3h5ent8f/2gAMAwEAAhEDEQA/APNOmdLzuq5bcTBrNtpBcezWtH0rLHu9tdbf3nLa6n9WuldErYOqdSNma9ocMTFq3kA8Pstvsp2Vu/4r1P8Agl1H1Yx6OifVU57mB1ltLs3I8XBoccWjd+5s2/277F5xl5WRmZNuVkvNl9zi+x57kqCM5ZJyAPDCBrTeZZZREIixcpa/3W9iZvRrCKup4RbWYH2nDcWXN/lOqudbi3f1PTo/49av1l6H0npnQ8LI6dYcoZtrn/a3RLmNb7GVtH801rnP9Vn856v87/Nrl1cd1Kx/SW9MfLmVXm+kz9He307mf29lTk+UDxRMSaB9Ub0WiQoggbaFppKVVVl1rKaWGy2xwZWxoJc5zjtaxrR9JznK9l9IZi13Tn4tmRjENtxmGwv3bvTsbXY6lmNf6L/5z0Miz/S0etT+kUixz0lsf82MwutxxfQeo49Rvt6dLxeGsb611fuqGM7Joo/TXYzcj12fzXp/aa7aGDZ9Xc99fTbw6s43VbBTTkAuLGWl/oupytrPUqsZ/O/zb/Up/SUeqkpy0lqU9BdZj5OTZm42PViZDcV7rPW91j23WVen6OPb7LPstvus9P8A4XYhP6NfX0qrqd1tdVeTvOLU7fvtFb20Xem9lb8drq3v/mrr6rfTZ6np/pMf10poJLYzPq07Gw6cuvPxcoZRcMSqgXmy4ssbjWNpbbi1N3Ne/wDwj6/UZ/NKF/1dyamZQrvoyMnAG7MxKS91lTQdl79zqm49zca13p5H2a+//Te/G9S5JTlJLUs6A+hobl5uNi5Ro+0jEtdZ6m0s+001ueyl+NXkZFO19NNmR/hGV2enb+jVb9l5f7J/a8N+yfaPspM+4WbPXbLP3Hs3bH/8HYkpqK91FrRh9LLWgF2K4uIABJ+1Zjdzo+k7a3aqKv8AUv6F0n/wo7/26zUlO9/itxMTM+t1OPmUV5NLqbSarmNsaSGyPZYHNXT5+R1zG6Xfn3fUXAqxGseXWiuoWMZq31nY237VX6f07N9Ps/kLj/qDhfWDM66W/V7LpwuoVUPsFuRq0sllVjGtNOVuf+k/0S7L/Fc761H6z9Sd1k5XpChwyjk79nrh9Xp/T/R+p6Xq7P8AgElOL/i86X0mrovWPrT1PFZ1D9mN242LYAWbw3e5z2vD2e7dUxj9n6H9JYr9FnSvrt9T+s5V3TMXp/VOjV/aGZGJX6Yc0NsvbXp73bmUXVOZY+xn+FTfUmv7d9RfrVgdPa668uc+qhoJeWOZ+hDWj3Pe/wBCzYxR+o+Jk9O+o31sy8+p2NRk4zqaH2gs3vFeRTtYH/8AC5FVX/GexJT/AP/QF0cjrP1NZj0Eeq/FfhkTxbWNtTHf1/0D/wDri8wc1zXFrgWuaYIOhBHYrV+r31jzOhZDnVAXY9sevjuMB0fRe1w/m7WT7LFpdbu+qvXHu6hjZL+m59mt1N9TnV2O/wBJvxBfstd+e/0/03+jqs9TfXhE4pyFEwmeIEa8J/rMsiJxGtSiKo9Xl0YYl32M5kRSLBSCe7y02e3+o1vv/rsV7E6Bk2uD82yvp2JPuyMo7Jb+9RjH9ayf5Po0/wDba2frOeij6tdPp6JaL8WjIsFj4LXmxzGbrMhj2se19uz2f8HX6df80pJZBxRiNbOp/Rj9VohoSdKH1eYwsu/BzKM3HIbfi2MuqJEgPrcLGS0/S9zVe6hkfV+9t9+Jj5FGTeQ5lBew00ku327LNvrZFe39HRU9lXpf4S6/0/0mWkpFj0Vv1k6f+0revY9FtXV8iuzfXLTjtyLmPpyM6tzt1213q2X1Ybm/ocj/ALVW01+jYPB+swwD05tdbr8bHqbXnYth2MtLMm/PqtqsqO+m6j7T+r3/AM5X/wAJjX3Y9mCkkp3+l/WDHxcbNpsflUvzMlmQ6zEc1jixjMmp2M9zvzL/ALb7/ZYz2fzNiBR1jEo6BkdMDbrn5QBdTaWmiu5tjXt6ji/4WvJ+yM+xPr/4Sx9l9lX6qsdJJTrv676eF0VuG11eZ0d9lvqu2uYXutGTQ6tkf4Pb7/UR7et9Kqtz83p+PbXl9Srsq9O1zXVY4yPbmei9v6TJ9Sp1lFHqsq+z12/9qLv0qwUklPQP+sODfbZ1LJqtd1S3Ffi2tGw0WONH2GnM+j6lFtXtyXVNZb6mVV6ld2P/AIJf84sP7A7pBpf+zXYTaJDaxcMlj3Zzcv1dpc6r7ZZdV6Pqf0G7/TfpFz6SSlK/1L+hdJ/8KO/9us1UFf6l/Quk/wDhR3/t1mpKTfVjF6vk9WZ+xLvR6pSx12KA4tfY5gmyikxs3uo9V2y79FbUyyv+Qum6x9YPrvnfV3OvyesV3dOryH4Fn2akj1yw073DKxsVtNWNczIbs9fJxvtdXq1+lZ/Nrj+ldTyek9Ro6jihpvxnb6xYNzZgt9zfmiV9Ytb0Z/R3Y9NtLrTfXc9rvVre/wBFtvovbY2v9KzFrrfvqsSU7nQ+k/WXo/XcFvS86vFzM3Efkiyvfa1rGssuyMLKx20XOtzKfQ/SYbce/Zd6P+EV/wCsNn106vg9UZ1rqtDsbol5pvor+i+wAljnfY6fayzZsxrOoegz7V+rM/WfUrVX6xdd+uWHl4uT1ZtdWQ+vKOI9kA115bBj249bqX7q/sf0sb/CUWWf4VZP/OzPH7RLKMau3qhebrmVRY31mmrLZTbu3ejlMf8ApMe71seuz9PjVY9/6VAEEWDY8EkEGjo//9HypJJJJSlNv8w/+uz8ligkkVKSSSSUpJJJJSkkkklKSSSSUpJJJJSlf6l/Q+lf+FHf+3WaqCSSlJJJJKdz61fS6T/6bMb8j1hpJJmL5Aun8xf/2QA4QklNBCEAAAAAAGEAAAABAQAAAA8AQQBkAG8AYgBlACAAUABoAG8AdABvAHMAaABvAHAAAAAZAEEAZABvAGIAZQAgAFAAaABvAHQAbwBzAGgAbwBwACAAQwBDACAAMgAwADEANQAuADUAAAABADhCSU0EBgAAAAAABwAIAAEAAQEA/+EPnmh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8APD94cGFja2V0IGJlZ2luPSLvu78iIGlkPSJXNU0wTXBDZWhpSHpyZVN6TlRjemtjOWQiPz4gPHg6eG1wbWV0YSB4bWxuczp4PSJhZG9iZTpuczptZXRhLyIgeDp4bXB0az0iQWRvYmUgWE1QIENvcmUgNS42LWMxMzIgNzkuMTU5Mjg0LCAyMDE2LzA0LzE5LTEzOjEzOjQwICAgICAgICAiPiA8cmRmOlJERiB4bWxuczpyZGY9Imh0dHA6Ly93d3cudzMub3JnLzE5OTkvMDIvMjItcmRmLXN5bnRheC1ucyMiPiA8cmRmOkRlc2NyaXB0aW9uIHJkZjphYm91dD0iIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtbG5zOnhtcE1NPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvbW0vIiB4bWxuczpzdEV2dD0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL3NUeXBlL1Jlc291cmNlRXZlbnQjIiB4bWxuczpwaG90b3Nob3A9Imh0dHA6Ly9ucy5hZG9iZS5jb20vcGhvdG9zaG9wLzEuMC8iIHhtbG5zOmRjPSJodHRwOi8vcHVybC5vcmcvZGMvZWxlbWVudHMvMS4xLyIgeG1wOkNyZWF0b3JUb29sPSJBZG9iZSBQaG90b3Nob3AgQ0MgMjAxNS41IChNYWNpbnRvc2gpIiB4bXA6Q3JlYXRlRGF0ZT0iMjAxNi0xMi0xNVQxNTowOToyNS0wNTowMCIgeG1wOk1ldGFkYXRhRGF0ZT0iMjAxNi0xMi0xNVQxNTowOToyNS0wNTowMCIgeG1wOk1vZGlmeURhdGU9IjIwMTYtMTItMTVUMTU6MDk6MjUtMDU6MDAiIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6OGM5ZmIyMDUtOTcxMy00OTQ1LThmZWQtYTU3ODMwNWE2OTc2IiB4bXBNTTpEb2N1bWVudElEPSJhZG9iZTpkb2NpZDpwaG90b3Nob3A6NTRiYjg1MzEtMDI2Yi0xMTdhLWEwNjctYzFkYjE4ODkyMDZjIiB4bXBNTTpPcmlnaW5hbERvY3VtZW50SUQ9InhtcC5kaWQ6OTAwYTk4NWMtYzcxOS00NmVjLTg1NzgtNWQ1MGNjMDMwZTQ4IiBwaG90b3Nob3A6Q29sb3JNb2RlPSIzIiBwaG90b3Nob3A6SUNDUHJvZmlsZT0iRGlzcGxheSIgZGM6Zm9ybWF0PSJpbWFnZS9qcGVnIj4gPHhtcE1NOkhpc3Rvcnk+IDxyZGY6U2VxPiA8cmRmOmxpIHN0RXZ0OmFjdGlvbj0iY3JlYXRlZCIgc3RFdnQ6aW5zdGFuY2VJRD0ieG1wLmlpZDo5MDBhOTg1Yy1jNzE5LTQ2ZWMtODU3OC01ZDUwY2MwMzBlNDgiIHN0RXZ0OndoZW49IjIwMTYtMTItMTVUMTU6MDk6MjUtMDU6MDAiIHN0RXZ0OnNvZnR3YXJlQWdlbnQ9IkFkb2JlIFBob3Rvc2hvcCBDQyAyMDE1LjUgKE1hY2ludG9zaCkiLz4gPHJkZjpsaSBzdEV2dDphY3Rpb249InNhdmVkIiBzdEV2dDppbnN0YW5jZUlEPSJ4bXAuaWlkOjhjOWZiMjA1LTk3MTMtNDk0NS04ZmVkLWE1NzgzMDVhNjk3NiIgc3RFdnQ6d2hlbj0iMjAxNi0xMi0xNVQxNTowOToyNS0wNTowMCIgc3RFdnQ6c29mdHdhcmVBZ2VudD0iQWRvYmUgUGhvdG9zaG9wIENDIDIwMTUuNSAoTWFjaW50b3NoKSIgc3RFdnQ6Y2hhbmdlZD0iLyIvPiA8L3JkZjpTZXE+IDwveG1wTU06SGlzdG9yeT4gPHBob3Rvc2hvcDpEb2N1bWVudEFuY2VzdG9ycz4gPHJkZjpCYWc+IDxyZGY6bGk+OTk1NjZBNTYxODUzQUNBRThEOUUxQTQ5MkVEREY1RTM8L3JkZjpsaT4gPHJkZjpsaT5hZG9iZTpkb2NpZDpwaG90b3Nob3A6NmZmZjVlOGItYzYzZi0xMTc5LWEwZTAtYmQzZGM0MDNiOWY4PC9yZGY6bGk+IDxyZGY6bGk+YWRvYmU6ZG9jaWQ6cGhvdG9zaG9wOjk3ZmNiNDljLWRhYjctMTE3OS05MzVjLTk5MzhmNWQzNTFhMjwvcmRmOmxpPiA8cmRmOmxpPnhtcC5kaWQ6MTM1MTIyNDgtM2ZiYy00MWQ1LWIxYmMtOThmYzc0ODRiMThkPC9yZGY6bGk+IDxyZGY6bGk+eG1wLmRpZDplODgyZDIzNS1hZDY0LTRiMGYtOTIwNy1kN2Y0YWNlYTYyOTQ8L3JkZjpsaT4gPC9yZGY6QmFnPiA8L3Bob3Rvc2hvcDpEb2N1bWVudEFuY2VzdG9ycz4gPC9yZGY6RGVzY3JpcHRpb24+IDwvcmRmOlJERj4gPC94OnhtcG1ldGE+ICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgPD94cGFja2V0IGVuZD0idyI/Pv/iDNhJQ0NfUFJPRklMRQABAQAADMhhcHBsAhAAAG1udHJSR0IgWFlaIAfgAAkAHAAIAAsALGFjc3BBUFBMAAAAAEFQUEwAAAAAAAAAAAAAAAAAAAABAAD21gABAAAAANMtYXBwbAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAEWRlc2MAAAFQAAAAYmRzY20AAAG0AAABsGNwcnQAAANkAAAAI3d0cHQAAAOIAAAAFHJYWVoAAAOcAAAAFGdYWVoAAAOwAAAAFGJYWVoAAAPEAAAAFHJUUkMAAAPYAAAIDGFhcmcAAAvkAAAAIHZjZ3QAAAwEAAAAMG5kaW4AAAw0AAAAPmNoYWQAAAx0AAAALG1tb2QAAAygAAAAKGJUUkMAAAPYAAAIDGdUUkMAAAPYAAAIDGFhYmcAAAvkAAAAIGFhZ2cAAAvkAAAAIGRlc2MAAAAAAAAACERpc3BsYXkAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABtbHVjAAAAAAAAACIAAAAMaHJIUgAAAAgAAAGoa29LUgAAAAgAAAGobmJOTwAAAAgAAAGoaWQAAAAAAAgAAAGoaHVIVQAAAAgAAAGoY3NDWgAAAAgAAAGoZGFESwAAAAgAAAGodWtVQQAAAAgAAAGoYXIAAAAAAAgA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\',
          ),
        ),
      ),
      \'field_repository_name\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Conestoga Collections\',
            \'format\' => NULL,
            \'safe_value\' => \'Conestoga Collections\',
          ),
        ),
      ),
      \'field_repository_namespace\' => array(
        \'und\' => array(
          array(
            \'value\' => \'conestoga\',
            \'format\' => NULL,
            \'safe_value\' => \'conestoga\',
          ),
        ),
      ),
      \'field_repository_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://conestoga.ocls.dgicloud.com/islandora/object/conestoga%3Aroot\',
            \'format\' => NULL,
            \'safe_value\' => \'https://conestoga.ocls.dgicloud.com/islandora/object/conestoga%3Aroot\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => FALSE,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Conestoga College\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'institution\',
      \'uid\' => \'1\',
      \'uuid\' => \'7bd4f9f6-8bd2-4e21-a351-95004e22743b\',
      \'vid\' => NULL,
      \'vuuid\' => \'6bcd8b8c-e5af-4304-bb74-ff717dcdb28e\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<div>\\r\\n<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean semper, est eu faucibus mattis, felis eros pretium lectus, non maximus lacus neque nec arcu. Fusce at sem non mi eleifend euismod sit amet vitae purus. Cras nec cursus ante. Nunc eget ipsum eleifend, ornare mauris eu, convallis neque. Aliquam sollicitudin lacus sed enim tincidunt, at pellentesque arcu egestas. Donec non nisi dapibus, bibendum libero et, scelerisque nulla. Donec vitae volutpat augue. Duis ut risus cursus, lobortis nulla ut, dictum sapien. Mauris consequat sem eget ante fermentum feugiat. Aliquam ultricies leo vel augue scelerisque, nec dignissim nisl volutpat. Suspendisse consectetur condimentum diam et ullamcorper. Donec rhoncus sit amet ante at placerat. Morbi ac laoreet mauris. Integer bibendum efficitur felis, cursus ornare ligula auctor eget.</p>\\r\\n\\r\\n<p>Nulla eu augue sapien. Quisque risus enim, bibendum ac ipsum et, sagittis dictum enim. Integer ac tellus sapien. Donec sed fermentum nunc. Pellentesque ultricies varius orci et sollicitudin. Donec consectetur dolor a volutpat congue. Nunc at arcu ut diam fringilla hendrerit.</p>\\r\\n\\r\\n<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean nec vehicula sem, ut lobortis sapien. Cras dictum eleifend placerat. Donec quam erat, feugiat vitae lacus nec, porttitor auctor ligula. Nam erat magna, rhoncus non felis a, imperdiet cursus elit. Donec commodo diam quis erat sagittis condimentum. Nam consectetur enim rutrum egestas ultricies. Morbi a dui faucibus, ullamcorper nisl in, iaculis orci. Donec vehicula scelerisque nulla imperdiet malesuada. Mauris at tortor non lacus blandit ultricies ac vitae urna. Curabitur a metus magna. Aliquam bibendum et ligula vitae congue. Suspendisse aliquam sit amet sem a sagittis. Donec pretium metus sit amet mi maximus vehicula. Ut luctus ultrices massa, ac auctor nisl gravida sed. Etiam eget elit enim.</p>\\r\\n\\r\\n<p>Duis scelerisque nisi nec est malesuada lobortis. Maecenas sem neque, auctor ut efficitur quis, venenatis sit amet quam. Vivamus sed hendrerit tellus, a molestie est. Sed suscipit diam quis odio accumsan commodo rutrum eu leo. In ultricies nisl ipsum, quis pharetra ipsum bibendum ac. Nam sed arcu id diam rutrum pharetra at sed nunc. Duis non neque nulla. In et quam risus. Aenean vestibulum ante eu magna auctor, at consequat massa imperdiet.</p>\\r\\n\\r\\n<p>Suspendisse et sapien ac turpis tristique commodo. Vivamus tempor lobortis purus ut malesuada. Aliquam sed nisl vitae quam malesuada placerat ac maximus ante. Sed iaculis finibus blandit. Curabitur tempus urna felis, nec egestas purus tincidunt quis. Cras venenatis, sem at imperdiet fermentum, velit eros rhoncus purus, vel iaculis nulla ipsum quis tellus. Phasellus pretium sem sit amet fringilla venenatis. Cras luctus augue elit, vel lobortis nulla lacinia ac. Duis vel tempus lorem. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Maecenas id urna nisl. Sed in suscipit ligula.</p>\\r\\n</div>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean semper, est eu faucibus mattis, felis eros pretium lectus, non maximus lacus neque nec arcu. Fusce at sem non mi eleifend euismod sit amet vitae purus. Cras nec cursus ante. Nunc eget ipsum eleifend, ornare mauris eu, convallis neque. Aliquam sollicitudin lacus sed enim tincidunt, at pellentesque arcu egestas. Donec non nisi dapibus, bibendum libero et, scelerisque nulla. Donec vitae volutpat augue. Duis ut risus cursus, lobortis nulla ut, dictum sapien. Mauris consequat sem eget ante fermentum feugiat. Aliquam ultricies leo vel augue scelerisque, nec dignissim nisl volutpat. Suspendisse consectetur condimentum diam et ullamcorper. Donec rhoncus sit amet ante at placerat. Morbi ac laoreet mauris. Integer bibendum efficitur felis, cursus ornare ligula auctor eget.</p>\\n<p>Nulla eu augue sapien. Quisque risus enim, bibendum ac ipsum et, sagittis dictum enim. Integer ac tellus sapien. Donec sed fermentum nunc. Pellentesque ultricies varius orci et sollicitudin. Donec consectetur dolor a volutpat congue. Nunc at arcu ut diam fringilla hendrerit.</p>\\n<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean nec vehicula sem, ut lobortis sapien. Cras dictum eleifend placerat. Donec quam erat, feugiat vitae lacus nec, porttitor auctor ligula. Nam erat magna, rhoncus non felis a, imperdiet cursus elit. Donec commodo diam quis erat sagittis condimentum. Nam consectetur enim rutrum egestas ultricies. Morbi a dui faucibus, ullamcorper nisl in, iaculis orci. Donec vehicula scelerisque nulla imperdiet malesuada. Mauris at tortor non lacus blandit ultricies ac vitae urna. Curabitur a metus magna. Aliquam bibendum et ligula vitae congue. Suspendisse aliquam sit amet sem a sagittis. Donec pretium metus sit amet mi maximus vehicula. Ut luctus ultrices massa, ac auctor nisl gravida sed. Etiam eget elit enim.</p>\\n<p>Duis scelerisque nisi nec est malesuada lobortis. Maecenas sem neque, auctor ut efficitur quis, venenatis sit amet quam. Vivamus sed hendrerit tellus, a molestie est. Sed suscipit diam quis odio accumsan commodo rutrum eu leo. In ultricies nisl ipsum, quis pharetra ipsum bibendum ac. Nam sed arcu id diam rutrum pharetra at sed nunc. Duis non neque nulla. In et quam risus. Aenean vestibulum ante eu magna auctor, at consequat massa imperdiet.</p>\\n<p>Suspendisse et sapien ac turpis tristique commodo. Vivamus tempor lobortis purus ut malesuada. Aliquam sed nisl vitae quam malesuada placerat ac maximus ante. Sed iaculis finibus blandit. Curabitur tempus urna felis, nec egestas purus tincidunt quis. Cras venenatis, sem at imperdiet fermentum, velit eros rhoncus purus, vel iaculis nulla ipsum quis tellus. Phasellus pretium sem sit amet fringilla venenatis. Cras luctus augue elit, vel lobortis nulla lacinia ac. Duis vel tempus lorem. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Maecenas id urna nisl. Sed in suscipit ligula.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => array(
        \'link_title\' => \'About\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-47\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => FALSE,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'About\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'ba136a9c-72d6-40c6-8b25-d30491032211\',
      \'vid\' => NULL,
      \'vuuid\' => \'9f1d9e52-bc1d-440c-82f5-d58763c6e233\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'georgian_png.png\',
            \'uri\' => \'public://georgian_png.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'28296\',
            \'status\' => \'1\',
            \'timestamp\' => \'1502372334\',
            \'uuid\' => \'be497bd1-1850-4e7f-aed2-f9da0d13af45\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1000\',
            \'height\' => \'244\',
            \'node_export_file_data\' => \'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\',
          ),
        ),
      ),
      \'field_repository_name\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Georgian\',
            \'format\' => NULL,
            \'safe_value\' => \'Georgian\',
          ),
        ),
      ),
      \'field_repository_namespace\' => array(
        \'und\' => array(
          array(
            \'value\' => \'georgian\',
            \'format\' => NULL,
            \'safe_value\' => \'georgian\',
          ),
        ),
      ),
      \'field_repository_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://georgian.ocls.dgicloud.com/islandora/object/georgian:root\',
            \'format\' => NULL,
            \'safe_value\' => \'https://georgian.ocls.dgicloud.com/islandora/object/georgian:root\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => FALSE,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Georgian Collections\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'institution\',
      \'uid\' => \'1\',
      \'uuid\' => \'e9b2e6b8-1856-446d-b2bf-8025d233573f\',
      \'vid\' => NULL,
      \'vuuid\' => \'1c2b8d19-a6ea-4adf-bef5-319ede2ecab4\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'loyalist_library.jpg\',
            \'uri\' => \'public://loyalist_library.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'48625\',
            \'status\' => \'1\',
            \'timestamp\' => \'1502372456\',
            \'uuid\' => \'cbf8005a-2a8e-45a7-8191-6a224f89b13c\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'400\',
            \'height\' => \'400\',
            \'node_export_file_data\' => \'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\',
          ),
        ),
      ),
      \'field_repository_name\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Loyalist\',
            \'format\' => NULL,
            \'safe_value\' => \'Loyalist\',
          ),
        ),
      ),
      \'field_repository_namespace\' => array(
        \'und\' => array(
          array(
            \'value\' => \'loyalist\',
            \'format\' => NULL,
            \'safe_value\' => \'loyalist\',
          ),
        ),
      ),
      \'field_repository_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://loyalist.ocls.dgicloud.com/islandora/object/loyalist:root\',
            \'format\' => NULL,
            \'safe_value\' => \'https://loyalist.ocls.dgicloud.com/islandora/object/loyalist:root\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => FALSE,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Loyalist Library\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'institution\',
      \'uid\' => \'1\',
      \'uuid\' => \'ee193a04-aa88-4b5f-bbc8-6198d5b23202\',
      \'vid\' => NULL,
      \'vuuid\' => \'b2120925-e0a8-42cd-ac02-8ef3e3fb8923\',
    ),
  (object) array(
      \'body\' => array(),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => array(
        \'source\' => \'node/6\',
        \'alias\' => \'advanced-search\',
        \'language\' => \'en\',
      ),
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Advanced Search\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'ee948a90-7044-4a34-a733-433714457be6\',
      \'vid\' => NULL,
      \'vuuid\' => \'1efd406d-bd59-4957-ad35-8a0314773dbb\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'centennial_square.png\',
            \'uri\' => \'public://centennial_square.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'31516\',
            \'status\' => \'1\',
            \'timestamp\' => \'1502372241\',
            \'uuid\' => \'b3d9f894-7bb1-4fc7-b6e5-c63059ee3b7e\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'900\',
            \'height\' => \'900\',
            \'node_export_file_data\' => \'/9j/4AAQSkZJRgABAQAAAQABAAD/2wCEAAMCAgcICAgICAYGCAgICAgICAgGCAYGBgYICAgIBggICAUGBQYFBQYGBQUFBgoFBQcICQkJBQULDQoIDQYICQgBAwQEBgUGCAYGCBAICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICP/AABEIA4QDhAMBIgACEQEDEQH/xAAdAAEAAQUBAQEAAAAAAAAAAAAAAQIFBwgJBAYD/8QAVhABAAECAgMJCggLBgUDBQEAAAECAwQRBSExBgcIEkFRkZLRFRYYUlNUYXGBsQkTIjI1dKGyFCMlQlVyc3WzwfAzNDZiguEXGSTC8SZDokVjk6PSRP/EABwBAQACAgMBAAAAAAAAAAAAAAABAgMEBQYHCP/EAEkRAQABAgMEBwUFBQMKBwEAAAABAhEDEiEEBVKRFBYxQZLR8AYTUVRhIjJxgcEHFSOhsUJicyQ0U3KCk7KzwuI1NkNEY9LhF//aAAwDAQACEQMRAD8A3DAfEjlQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA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la6kdh3PteStdSOx6Qz18U85LQ83c+15K11I7Dufa8la6kdj0hnr4p5yWh5u59ryVrqR2Hc+15K11I7HpDPXxTzktDzdz7XkrXUjsO59ryVrqR2PSGevinnJaHm7n2vJWupHYdz7XkrXUjsekM9fFPOS0PN3PteStdSOw7n2vJWupHY9IZ6+Kecloebufa8la6kdh3PteStdSOx6Qz18U85LQ83c+15K11I7Dufa8la6kdj0hnr4p5yWh5u59ryVrqR2Hc+15K11I7HpDPXxTzktDzdz7XkrXUjsO59ryVrqR2PSGevinnJaHm7n2vJWupHYdz7XkrXUjsekM9fFPOS0PN3PteStdSOw7n2vJWupHY9IZ6+Kecloebufa8la6kdh3PteStdSOx6Qz18U85LQ83c+15K11I7Dufa8la6kdj0hnr4p5yWh5u59ryVrqR2Hc+15K11I7HpDPXxTzktDzdz7XkrXUjsO59ryVrqR2PSGevinnJaHm7n2vJWupHYdz7XkrXUjsekM9fFPOS0PN3PteStdSOw7n2vJWupHY9IZ6+Kecloebufa8la6kdh3PteStdSOx6Qz18U85LQ83c+15K11I7Dufa8la6kdj0hnr4p5yWh5u59ryVrqR2Hc+15K11I7HpDPXxTzktDzdz7XkrXUjsO59ryVrqR2PSGevinnJaHm7n2vJWupHYdz7XkrXUjsekM9fFPOS0PN3PteStdSOw7n2vJWupHY9IZ6+Kecloebufa8la6kdh3PteStdSOx6Qz18U85LQ83c+15K11I7Dufa8la6kdj0hnr4p5yWh5u59ryVrqR2Hc+15K11I7HpDPXxTzktDzdz7XkrXUjsO59ryVrqR2PSGevinnJaHm7n2vJWupHYdz7XkrXUjsekM9fFPOS0PN3PteStdSOw7n2vJWupHY9IZ6+Kecloebufa8la6kdh3PteStdSOx6Qz18U85LQ83c+15K11I7Dufa8la6kdj0hnr4p5yWh5u59ryVrqR2Hc+15K11I7HpDPXxTzktDzdz7XkrXUjsO59ryVrqR2PSGevinnJaHm7n2vJWupHYdz7XkrXUjsekM9fFPOS0PN3PteStdSOw7n2vJWupHY9IZ6+Kecloebufa8la6kdh3PteStdSOx6Qz18U85LQ83c+15K11I7Dufa8la6kdj0hnr4p5yWh5u59ryVrqR2Hc+15K11I7HpDPXxTzktDzdz7XkrXUjsO59ryVrqR2PSGevinnJaHm7n2vJWupHYdz7XkrXUjsekM9fFPOS0PN3PteStdSOw7n2vJWupHY9IZ6+Kecloebufa8la6kdh3PteStdSOx6Qz18U85LQ83c+15K11I7Dufa8la6kdj0hnr4p5yWh5u59ryVrqR2Hc+15K11I7HpDPXxTzktDzdz7XkrXUjsS/fJJnr4p5yWgAUSAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA//2Q==\',
          ),
        ),
      ),
      \'field_repository_name\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Centennial Collections\',
            \'format\' => NULL,
            \'safe_value\' => \'Centennial Collections\',
          ),
        ),
      ),
      \'field_repository_namespace\' => array(
        \'und\' => array(
          array(
            \'value\' => \'centennial\',
            \'format\' => NULL,
            \'safe_value\' => \'centennial\',
          ),
        ),
      ),
      \'field_repository_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://centennial.ocls.dgicloud.com/islandora/object/centennial:Aroot\',
            \'format\' => NULL,
            \'safe_value\' => \'https://centennial.ocls.dgicloud.com/islandora/object/centennial:Aroot\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => FALSE,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Centennial College\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'institution\',
      \'uid\' => \'1\',
      \'uuid\' => \'f8e3b8c4-659c-47a4-b81c-e19bf8f73618\',
      \'vid\' => NULL,
      \'vuuid\' => \'7121224e-605f-4858-975f-109f3c11b5ad\',
    ),
)',
);
  return $node_export;
}
